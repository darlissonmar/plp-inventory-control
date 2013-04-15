#include "StdAfx.h"

DataBase::DataBase(void)
{
	this->amigos = new hash_map<int, Amigo>;
	this->emprestimos = new hash_map<int, Emprestimo>;
	this->midias_audio = new hash_map<int, MidiaAudio>;
	this->midias_filme = new hash_map<int, MidiaFilme>;
	this->midias_dados = new hash_map<int, MidiaDados>;
	
}

DataBase::~DataBase( void )
{

}

void DataBase::inicializar( void )
{
	Amigo *amigo1 = new Amigo(1,"Joao", "dos Santos", "joao@jmail.com","2123-1234","Rua das mangueiras", "Masculino");
	Amigo *amigo2 = new Amigo(2,"Pedro", "da Silva", "pedro@jmail.com","2123-4321","Rua das Laranjeiras", "Masculino");



	typedef pair <const int, Amigo> par_amigo;

	try
	{
		this->amigos->insert(par_amigo(amigo1->getId(),*amigo1));
		this->amigos->insert(par_amigo(amigo2->getId(),*amigo2));
	}
	catch (exception e)
	{
		System::Console::WriteLine("Aconteceu um erro!!");
	}
}
	//FIXME: Metodo do controller amigo
Amigo DataBase::buscar_amigo( int amigo_id )
{	
	Amigo *amigo_retorno = new Amigo();
	
	try
	{
		*amigo_retorno = this->amigos->at(amigo_id);
	}
		catch (exception e)
	{
	}
		return *amigo_retorno;
}
