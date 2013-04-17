#include "stdafx.h"

ControllerAmigo::ControllerAmigo(void)
{
	this->dataBase = DataBase::getInstance();
}

ControllerAmigo::~ControllerAmigo(void){

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

list<Amigo *> * ControllerAmigo::buscarImpontuais(){
	list<Amigo *> * returnedList= new list<Amigo *>();

	hash_map<const int, Emprestimo*>::const_iterator it;

	for(it= dataBase->getEmprestimos()->begin(); it != dataBase->getEmprestimos()->end(); it++){
		if(it->second->isAtrasado()){
			returnedList->push_back(it->second->getAmigo());			
		}
	}
	returnedList->sort();
	returnedList->unique();
	return returnedList;

}

list<Amigo *> * ControllerAmigo::buscarPontuais(){
	
	list<Amigo *> * returnedList= buscarTodos();

	hash_map<const int, Emprestimo*>::const_iterator it;
	for(it= dataBase->getEmprestimos()->begin(); it != dataBase->getEmprestimos()->end(); it++){
		if(it->second->isAtrasado()){
			returnedList->remove(it->second->getAmigo());			
		}
	}
	
	return returnedList;

}

Amigo * ControllerAmigo::buscarMaisImpontual(){
	list<Amigo *> * returnedList= new list<Amigo *>();

	hash_map<const int, Emprestimo*>::const_iterator it;

	for(it= dataBase->getEmprestimos()->begin(); it != dataBase->getEmprestimos()->end(); it++){
		if(it->second->isAtrasado()){
			returnedList->push_back(it->second->getAmigo());			
		}
	}
	
	returnedList->sort();

	int numRepeticoes=0, maiorNumRepeticoes=0;
	Amigo* returnedAmigo;
	
	list<Amigo *>::iterator listI, listJ;

	for(listI= returnedList->begin(); listI != returnedList->end(); listI++){
		returnedAmigo= *listI;//Evita retorno nulo em caso de não repetição
		for(listJ= returnedList->begin(); listJ != returnedList->end(); listJ++){
			if(listI==listJ)
				numRepeticoes++;
		}

		if(numRepeticoes>maiorNumRepeticoes){
			maiorNumRepeticoes=numRepeticoes;
			returnedAmigo = *listI;
		}
		numRepeticoes=0;
	}	
	return returnedAmigo;

}

Amigo * ControllerAmigo::buscarMaisPontual(){
	list<Amigo *> * returnedList= new list<Amigo *>();	

	hash_map<const int, Emprestimo*>::const_iterator it;
	for(it= dataBase->getEmprestimos()->begin(); it != dataBase->getEmprestimos()->end(); it++){
		if(it->second->isAtrasado())
			continue;
		returnedList->push_back(it->second->getAmigo());		
	}

	returnedList->sort();

	int numRepeticoes=0, maiorNumRepeticoes=0;
	Amigo* returnedAmigo;

	list<Amigo *>::iterator listI, listJ;

	for(listI= returnedList->begin(); listI != returnedList->end(); listI++){
		returnedAmigo= *listI;//Evita retorno nulo em caso de não repetição
		for(listJ= returnedList->begin(); listJ != returnedList->end(); listJ++){
			if(listI==listJ)
				numRepeticoes++;
		}

		if(numRepeticoes>maiorNumRepeticoes){
			maiorNumRepeticoes=numRepeticoes;
			returnedAmigo = *listI;
		}
		numRepeticoes=0;
	}	
	return returnedAmigo;

}