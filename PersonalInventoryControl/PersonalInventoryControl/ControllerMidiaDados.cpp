#include "stdafx.h"


ControllerMidiaDados::ControllerMidiaDados(void)
{
	this->dataBase=DataBase::getInstance();
}


ControllerMidiaDados::~ControllerMidiaDados(void)
{
}

list<MidiaDados *> * ControllerMidiaDados::buscarTodos(){
	list<MidiaDados *> * returnedList= new list<MidiaDados *>();

	hash_map<const int, MidiaDados*>::const_iterator it;

	for(it= dataBase->getMidiasDados()->begin(); it != dataBase->getMidiasDados()->end(); it++){
		returnedList->push_back(it->second);
	}
	return returnedList;
}

list<MidiaDados *> * ControllerMidiaDados::buscarDisponiveis(){
	list<MidiaDados *> * returnedList= new list<MidiaDados *>();

	hash_map<const int, MidiaDados*>::const_iterator it;

	for(it= dataBase->getMidiasDados()->begin(); it != dataBase->getMidiasDados()->end(); it++){
		if(it->second->isDisponivel()){
			returnedList->push_back(it->second);			
		}
	}
	returnedList->sort();
	returnedList->unique();
	return returnedList;
}

list<MidiaDados *> * ControllerMidiaDados::buscarIndisponiveis(){
	list<MidiaDados *> * returnedList= new list<MidiaDados *>();

	hash_map<const int, MidiaDados*>::const_iterator it;

	for(it= dataBase->getMidiasDados()->begin(); it != dataBase->getMidiasDados()->end(); it++){
		if(!it->second->isDisponivel()){
			returnedList->push_back(it->second);			
		}
	}
	returnedList->sort();
	returnedList->unique();
	return returnedList;
}


bool ControllerMidiaDados::adicionar(MidiaDados* element)
{
	try
	{
		dataBase->insertMidiaDados(element);
		return true;
	}catch (exception e)
	{
		System::Console::WriteLine((wchar_t)e.what());
		System::Console::WriteLine("ERROR: ControllerMidiaDados::adicionar(MidiaDados* element)");
		return false;
	}
}

bool ControllerMidiaDados::atualizar(MidiaDados* element)
{
	try{					
		MidiaDados *am = new MidiaDados(element->getId(), element->isDisponivel(), element->getTitulo(), element->getAno(),
			element->getDescricao(), element->getTipoMidia());
		dataBase->getMidiasDados()->insert(ParMidiaDados(am->getId(), am));
		return true;
	}catch (exception e)
	{
		System::Console::WriteLine((wchar_t)e.what());
		System::Console::WriteLine("ERROR: ControllerMidiaDados::atualizar(MidiaDados* element)");
		return false;
	}
}

bool ControllerMidiaDados::deletar(int idObj)
{
	try{					
		dataBase->getMidiasDados()->erase(idObj);
		return true;
	}catch (exception e)
	{
		System::Console::WriteLine((wchar_t)e.what());
		System::Console::WriteLine("ERROR: ControllerMidiaDados::deletar(int idObj)");
		return false;
	}
}

MidiaDados* ControllerMidiaDados::buscar(string attr){
	try
	{
		hash_map<const int, MidiaDados*>::const_iterator it;

		for(it= dataBase->getMidiasDados()->begin(); it != dataBase->getMidiasDados()->end(); it++){
			if(it->second->getTitulo()==attr)
				return it->second;
		}

		return NULL;
	}
	catch (exception e)
	{
		System::Console::WriteLine((wchar_t)e.what());
		System::Console::WriteLine("ERROR: ControllerMidiaDados::buscar(string attr)");
		return NULL;
	}
}


