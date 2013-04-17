#include "stdafx.h"


ControllerLivro::ControllerLivro(void)
{
	this->dataBase = DataBase::getInstance();
}


ControllerLivro::~ControllerLivro(void)
{
}

list<Livro *> * ControllerLivro::buscarTodos(){
	list<Livro *> * returnedList= new list<Livro *>();

	hash_map<const int, Livro*>::const_iterator it;

	for(it= dataBase->getLivros()->begin(); it != dataBase->getLivros()->end(); it++){
		returnedList->push_back(it->second);
	}
	return returnedList;
}

list<Livro *> * ControllerLivro::buscarDisponiveis(){
	list<Livro *> * returnedList= new list<Livro *>();

	hash_map<const int, Livro*>::const_iterator it;

	for(it= dataBase->getLivros()->begin(); it != dataBase->getLivros()->end(); it++){
		if(it->second->isDisponivel()){
			returnedList->push_back(it->second);			
		}
	}
	returnedList->sort();
	returnedList->unique();
	return returnedList;
}

list<Livro *> * ControllerLivro::buscarIndisponiveis(){
	list<Livro *> * returnedList= new list<Livro *>();

	hash_map<const int, Livro*>::const_iterator it;

	for(it= dataBase->getLivros()->begin(); it != dataBase->getLivros()->end(); it++){
		if(!it->second->isDisponivel()){
			returnedList->push_back(it->second);			
		}
	}
	returnedList->sort();
	returnedList->unique();
	return returnedList;
}


bool ControllerLivro::adicionar(Livro* element)
{
	try
	{
		dataBase->insertLivro(element);
		return true;
	}catch (exception e)
	{
		System::Console::WriteLine((wchar_t)e.what());
		System::Console::WriteLine("ERROR: ControllerLivro::adicionar(Livro* element)");
		return false;
	}
}

bool ControllerLivro::atualizar(Livro* element)
{
	try{					
		Livro *am = new Livro(element->getId(), element->isDisponivel(), element->getTitulo(),
			element->getAno(), element->getAutor(), element->getArea(), element->getEdicao(),
			element->getEditora(), element->getVolume());
		dataBase->getLivros()->erase(element->getId());
		dataBase->getLivros()->insert(ParLivro(am->getId(), am));
		return true;
	}catch (exception e)
	{
		System::Console::WriteLine((wchar_t)e.what());
		System::Console::WriteLine("ERROR: ControllerLivro::atualizar(Livro* element)");
		return false;
	}
}

bool ControllerLivro::deletar(int idObj)
{
	try{					
		dataBase->getLivros()->erase(idObj);
		return true;
	}catch (exception e)
	{
		System::Console::WriteLine((wchar_t)e.what());
		System::Console::WriteLine("ERROR: ControllerLivro::deletar(int idObj)");
		return false;
	}
}

Livro* ControllerLivro::buscar(string attr){
	try
	{
		hash_map<const int, Livro*>::const_iterator it;

		for(it= dataBase->getLivros()->begin(); it != dataBase->getLivros()->end(); it++){
			if(it->second->getTitulo()==attr)
				return it->second;
		}

		return NULL;
	}
	catch (exception e)
	{
		System::Console::WriteLine((wchar_t)e.what());
		System::Console::WriteLine("ERROR: ControllerLivro::buscar(string attr)");
		return NULL;
	}
}
