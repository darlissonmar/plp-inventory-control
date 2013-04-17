#include "StdAfx.h"
#include "ControllerMidiaFilme.h"


ControllerMidiaFilme::ControllerMidiaFilme(void)
{
	this->dataBase = DataBase::getInstance();
}


ControllerMidiaFilme::~ControllerMidiaFilme(void)
{
}


list<MidiaFilme *> * ControllerMidiaFilme::buscarTodos(){
	list<MidiaFilme *> * returnedList= new list<MidiaFilme *>();

	hash_map<const int, MidiaFilme*>::const_iterator it;

	for(it= dataBase->getMidiasFilme()->begin(); it != dataBase->getMidiasFilme()->end(); it++){
		returnedList->push_back(it->second);
	}
	return returnedList;
}

list<MidiaFilme *> * ControllerMidiaFilme::buscarDisponiveis(){
	list<MidiaFilme *> * returnedList= new list<MidiaFilme *>();

	hash_map<const int, MidiaFilme*>::const_iterator it;

	for(it= dataBase->getMidiasFilme()->begin(); it != dataBase->getMidiasFilme()->end(); it++){
		if(it->second->isDisponivel()){
			returnedList->push_back(it->second);			
		}
	}
	returnedList->sort();
	returnedList->unique();
	return returnedList;
}

list<MidiaFilme *> * ControllerMidiaFilme::buscarIndisponiveis(){
	list<MidiaFilme *> * returnedList= new list<MidiaFilme *>();

	hash_map<const int, MidiaFilme*>::const_iterator it;

	for(it= dataBase->getMidiasFilme()->begin(); it != dataBase->getMidiasFilme()->end(); it++){
		if(!it->second->isDisponivel()){
			returnedList->push_back(it->second);			
		}
	}
	returnedList->sort();
	returnedList->unique();
	return returnedList;
}


bool ControllerMidiaFilme::adicionar(MidiaFilme* element)
{
	try
	{
		dataBase->insertMidiaFilme(element);
		return true;
	}catch (exception e)
	{
		System::Console::WriteLine((wchar_t)e.what());
		System::Console::WriteLine("ERROR: ControllerMidiaFilme::adicionar(MidiaFilme* element)");
		return false;
	}
}

bool ControllerMidiaFilme::atualizar(MidiaFilme* element)
{
	try{					
		MidiaFilme *am = new MidiaFilme(element->getId(), element->isDisponivel(), element->getTitulo(), 
			element->getAno(), element->getGenero(), element->getAtores(), element->getProdutor(), element->getDiretor(), element->getTipoMidia());
		dataBase->getMidiasFilme()->insert(ParMidiaFilme(am->getId(), am));
		return true;
	}catch (exception e)
	{
		System::Console::WriteLine((wchar_t)e.what());
		System::Console::WriteLine("ERROR: ControllerMidiaFilme::atualizar(MidiaFilme* element)");
		return false;
	}
}

bool ControllerMidiaFilme::deletar(int idObj)
{
	try{					
		dataBase->getMidiasFilme()->erase(idObj);
		return true;
	}catch (exception e)
	{
		System::Console::WriteLine((wchar_t)e.what());
		System::Console::WriteLine("ERROR: ControllerMidiaFilme::deletar(int idObj)");
		return false;
	}
}

MidiaFilme* ControllerMidiaFilme::buscar(string attr){
	try
	{
		hash_map<const int, MidiaFilme*>::const_iterator it;

		for(it= dataBase->getMidiasFilme()->begin(); it != dataBase->getMidiasFilme()->end(); it++){
			if(it->second->getTitulo()==attr)
				return it->second;
		}

		return NULL;
	}
	catch (exception e)
	{
		System::Console::WriteLine((wchar_t)e.what());
		System::Console::WriteLine("ERROR: ControllerMidiaFilme::buscar(string attr)");
		return NULL;
	}
}

