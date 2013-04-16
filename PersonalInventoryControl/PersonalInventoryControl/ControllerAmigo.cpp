#include "stdafx.h"

ControllerAmigo::ControllerAmigo(void)
{
	this->dataBase = DataBase::getInstance();
}

bool ControllerAmigo::adicionar(Amigo* element)
{
	try
	{
		dataBase->insertAmigo(element);
		return true;
	}catch (exception e)
	{
		System::Console::WriteLine((wchar_t)e.what());
		System::Console::WriteLine("ERROR: ControllerAmigo::adicionar(Amigo* element)");
		return false;
	}
}

bool ControllerAmigo::atualizar(Amigo* element)
{
	try{					
		Amigo *am = new Amigo(element->getId(), element->getNome(), element->getSobrenome(), element->getEmail(), element->getTelefone(),element->getGenero(),element->getEndereco());
		dataBase->getAmigos()->erase(element->getId());
		dataBase->getAmigos()->insert(ParAmigo(am->getId(), am));
		return true;
	}catch (exception e)
	{
		System::Console::WriteLine((wchar_t)e.what());
		System::Console::WriteLine("ERROR: ControllerAmigo::deletar(int idObj)");
		return false;
	}
}

bool ControllerAmigo::deletar(int idObj)
{
	try{					
		dataBase->getAmigos()->erase(idObj);
		return true;
	}catch (exception e)
	{
		System::Console::WriteLine((wchar_t)e.what());
		System::Console::WriteLine("ERROR: ControllerAmigo::deletar(int idObj)");
		return false;
	}
}

Amigo* ControllerAmigo::buscar(string attr){
	try
	{
		hash_map<const int, Amigo*>::const_iterator it;
		
		for(it= dataBase->getAmigos()->begin(); it != dataBase->getAmigos()->end(); it++){
			if(it->second->getNome()==attr)
				return it->second;
		}
		
	
		return NULL;
	}
	catch (exception e)
	{
		System::Console::WriteLine((wchar_t)e.what());
		System::Console::WriteLine("ERROR: ControllerAmigo::buscar(string attr)");
		return NULL;
	}
}

list<Amigo *> * ControllerAmigo::buscarTodos(){
	list<Amigo *> * returnedList= new list<Amigo *>();

	hash_map<const int, Amigo*>::const_iterator it;

	for(it= dataBase->getAmigos()->begin(); it != dataBase->getAmigos()->end(); it++){
		returnedList->push_back(it->second);
	}


	return returnedList;

}

