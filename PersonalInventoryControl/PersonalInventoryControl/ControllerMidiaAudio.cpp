#include "StdAfx.h"
#include "ControllerMidiaAudio.h"


ControllerMidiaAudio::ControllerMidiaAudio(void)
{
	this->dataBase=DataBase::getInstance();
}


ControllerMidiaAudio::~ControllerMidiaAudio(void)
{
}

list<MidiaAudio *> * ControllerMidiaAudio::buscarTodos(){
	list<MidiaAudio *> * returnedList= new list<MidiaAudio *>();

	hash_map<const int, MidiaAudio*>::const_iterator it;

	for(it= dataBase->getMidiasAudio()->begin(); it != dataBase->getMidiasAudio()->end(); it++){
		returnedList->push_back(it->second);
	}
	return returnedList;
}

list<MidiaAudio *> * ControllerMidiaAudio::buscarDisponiveis(){
	list<MidiaAudio *> * returnedList= new list<MidiaAudio *>();

	hash_map<const int, MidiaAudio*>::const_iterator it;

	for(it= dataBase->getMidiasAudio()->begin(); it != dataBase->getMidiasAudio()->end(); it++){
		if(it->second->isDisponivel()){
			returnedList->push_back(it->second);			
		}
	}
	returnedList->sort();
	returnedList->unique();
	return returnedList;
}

list<MidiaAudio *> * ControllerMidiaAudio::buscarIndisponiveis(){
	list<MidiaAudio *> * returnedList= new list<MidiaAudio *>();

	hash_map<const int, MidiaAudio*>::const_iterator it;

	for(it= dataBase->getMidiasAudio()->begin(); it != dataBase->getMidiasAudio()->end(); it++){
		if(!it->second->isDisponivel()){
			returnedList->push_back(it->second);			
		}
	}
	returnedList->sort();
	returnedList->unique();
	return returnedList;
}


bool ControllerMidiaAudio::adicionar(MidiaAudio* element)
{
	try
	{
		dataBase->insertMidiaAudio(element);
		return true;
	}catch (exception e)
	{
		System::Console::WriteLine((wchar_t)e.what());
		System::Console::WriteLine("ERROR: ControllerMidiaAudio::adicionar(MidiaAudio* element)");
		return false;
	}
}

bool ControllerMidiaAudio::atualizar(MidiaAudio* element)
{
	try{					
		MidiaAudio *am = new MidiaAudio(element->getId(), element->isDisponivel(), element->getTitulo(), 
			element->getAno(),element->getAlbum(), element->getArtista(), element->getVolume(), 
			element->getGenero(), element->getGravadora(), element->getTipoMidia());
		dataBase->getMidiasAudio()->erase(element->getId());
		dataBase->getMidiasAudio()->insert(ParMidiaAudio(am->getId(), am));
		return true;
	}catch (exception e)
	{
		System::Console::WriteLine((wchar_t)e.what());
		System::Console::WriteLine("ERROR: ControllerMidiaAudio::atualizar(MidiaAudio* element)");
		return false;
	}
}

bool ControllerMidiaAudio::deletar(int idObj)
{
	try{					
		dataBase->getMidiasAudio()->erase(idObj);
		return true;
	}catch (exception e)
	{
		System::Console::WriteLine((wchar_t)e.what());
		System::Console::WriteLine("ERROR: ControllerMidiaAudio::deletar(int idObj)");
		return false;
	}
}

MidiaAudio* ControllerMidiaAudio::buscar(string attr){
	try
	{
		hash_map<const int, MidiaAudio*>::const_iterator it;

		for(it= dataBase->getMidiasAudio()->begin(); it != dataBase->getMidiasAudio()->end(); it++){
			if(it->second->getTitulo()==attr)
				return it->second;
		}

		return NULL;
	}
	catch (exception e)
	{
		System::Console::WriteLine((wchar_t)e.what());
		System::Console::WriteLine("ERROR: ControllerMidiaAudio::buscar(string attr)");
		return NULL;
	}
}
