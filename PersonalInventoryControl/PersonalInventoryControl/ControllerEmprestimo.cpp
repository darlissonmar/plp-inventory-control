#include "stdafx.h"


ControllerEmprestimo::ControllerEmprestimo(void)
{
	this->dataBase=DataBase::getInstance();
}


ControllerEmprestimo::~ControllerEmprestimo(void)
{
}

list<Emprestimo *> * ControllerEmprestimo::buscarTodos(){
	list<Emprestimo *> * returnedList= new list<Emprestimo *>();

	hash_map<const int, Emprestimo*>::const_iterator it;

	for(it= dataBase->getEmprestimos()->begin(); it != dataBase->getEmprestimos()->end(); it++){
		returnedList->push_back(it->second);
	}

	return returnedList;

}

list<Emprestimo *> * ControllerEmprestimo::buscarEmpAbertos(){
	list<Emprestimo *> * returnedList= new list<Emprestimo *>();

	hash_map<const int, Emprestimo*>::const_iterator it;

	for(it= dataBase->getEmprestimos()->begin(); it != dataBase->getEmprestimos()->end(); it++){
		if(it->second->getDataDevolucao().length()==0){
			returnedList->push_back(it->second);			
		}
	}
	returnedList->sort();
	returnedList->unique();
	return returnedList;

}

list<Emprestimo *> * ControllerEmprestimo::buscarEmpFechados(){
	list<Emprestimo *> * returnedList= new list<Emprestimo *>();

	hash_map<const int, Emprestimo*>::const_iterator it;

	for(it= dataBase->getEmprestimos()->begin(); it != dataBase->getEmprestimos()->end(); it++){
		if(it->second->getDataDevolucao().length()!=0){
			returnedList->push_back(it->second);			
		}
	}
	returnedList->sort();
	returnedList->unique();
	return returnedList;

}

list<Emprestimo *> * ControllerEmprestimo::buscarEmpVencidos(){
	list<Emprestimo *> * returnedList= new list<Emprestimo *>();

	hash_map<const int, Emprestimo*>::const_iterator it;

	for(it= dataBase->getEmprestimos()->begin(); it != dataBase->getEmprestimos()->end(); it++){
		if(it->second->getDataDevolucao().length()==0){
			returnedList->push_back(it->second);			
		}
	}
	returnedList->sort();
	returnedList->unique();
	return returnedList;

}



bool ControllerEmprestimo::adicionar(Emprestimo* element)
{
	try
	{
		dataBase->insertEmprestimo(element);
		return true;
	}catch (exception e)
	{
		System::Console::WriteLine((wchar_t)e.what());
		System::Console::WriteLine("ERROR: ControllerEmprestimo::adicionar(Emprestimo* element)");
		return false;
	}
}

bool ControllerEmprestimo::atualizar(Emprestimo* element)
{
	try{					
		Emprestimo *am = new Emprestimo(element->getId(), element->getDataEmprestimo(), element->getDataDevolucao(),
			element->getPrazoDias(), element->isAtrasado(), element->getAmigo(), element->getMaterial());
		dataBase->getEmprestimos()->erase(element->getId());
		dataBase->getEmprestimos()->insert(ParEmprestimo(am->getId(), am));
		return true;
	}catch (exception e)
	{
		System::Console::WriteLine((wchar_t)e.what());
		System::Console::WriteLine("ERROR: ControllerEmprestimo::deletar(int idObj)");
		return false;
	}
}

bool ControllerEmprestimo::deletar(int idObj)
{
	try{					
		dataBase->getEmprestimos()->erase(idObj);
		return true;
	}catch (exception e)
	{
		System::Console::WriteLine((wchar_t)e.what());
		System::Console::WriteLine("ERROR: ControllerEmprestimo::deletar(int idObj)");
		return false;
	}
}

Emprestimo* ControllerEmprestimo::buscar(string attr){
	try
	{
		hash_map<const int, Emprestimo*>::const_iterator it;

		for(it= dataBase->getEmprestimos()->begin(); it != dataBase->getEmprestimos()->end(); it++){
			if(it->second->getAmigo()->getNome()==attr)
				return it->second;
		}

		return NULL;
	}
	catch (exception e)
	{
		System::Console::WriteLine((wchar_t)e.what());
		System::Console::WriteLine("ERROR: ControllerEmprestimo::buscar(string attr)");
		return NULL;
	}
}

