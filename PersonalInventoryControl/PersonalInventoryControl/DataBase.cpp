#include "StdAfx.h"

DataBase* DataBase::dataBaseInstance=0;

DataBase* DataBase::getInstance()
{
	if(!dataBaseInstance)
		dataBaseInstance = new DataBase();
	return dataBaseInstance;
}

DataBase::DataBase(void)
{
	this->amigos = new hash_map<int, Amigo *>;
	this->emprestimos = new hash_map<int, Emprestimo *>;

	this->livros = new hash_map<int, Livro *>;
	this->midias_audio = new hash_map<int, MidiaAudio *>;
	this->midias_filme = new hash_map<int, MidiaFilme *>;
	this->midias_dados = new hash_map<int, MidiaDados *>;

	this->amigo_db_indice=1;
	this->livro_db_indice=1;
	this->midiaaudio_db_indice=1;
	this->midiadados_db_indice=1;
	this->midiafilme_db_indice=1;
	this->emprestimo_db_indice=1;

	inicializar();
	
}

DataBase::~DataBase( void )
{
	delete(amigos);
	delete(emprestimos);
	delete(livros);
	delete(midias_dados);
	delete(midias_audio);
	delete(midias_filme);
}

void DataBase::insertAmigo(Amigo* amigo){
	if(amigo){
		amigo->setId(amigo_db_indice++);
		this->amigos->insert(ParAmigo(amigo->getId(), amigo));
	}else{
		throw new exception;
	}
}

void DataBase::insertEmprestimo(Emprestimo* emprestimo){
	if(emprestimo){
		emprestimo->setId(emprestimo_db_indice++);
		this->emprestimos->insert(ParEmprestimo(emprestimo->getId(), emprestimo));
	}else{
		throw new exception;
	}
}

void DataBase::insertLivro(Livro* livro){
	if(livro){
		livro->setId(livro_db_indice++);
		this->livros->insert(ParLivro(livro->getId(), livro));
	}else{
		throw new exception;
	}
}

void DataBase::insertMidiaAudio(MidiaAudio* midiaAudio){
	if(midiaAudio){
		midiaAudio->setId(midiaaudio_db_indice++);
		this->midias_audio->insert(ParMidiaAudio(midiaAudio->getId(), midiaAudio));
	}else{
		throw new exception;
	}
}

void DataBase::insertMidiaFilme(MidiaFilme* midiaFilme){
	if(midiaFilme){
		midiaFilme->setId(midiafilme_db_indice++);
		this->midias_filme->insert(ParMidiaFilme(midiaFilme->getId(), midiaFilme));
	}else{
		throw new exception;
	}
}

void DataBase::inicializar( void )
{
	Amigo *amigo1 = new Amigo(amigo_db_indice++,"Joao", "dos Santos", "joao@jmail.com","2123-1234","Rua das mangueiras", "Masculino");
	Amigo *amigo2 = new Amigo(amigo_db_indice++,"Pedro", "da Silva", "pedro@jmail.com","2123-4321","Rua das Laranjeiras", "Masculino");
	
	try
	{
		this->amigos->insert(ParAmigo(amigo1->getId(),amigo1));
		this->amigos->insert(ParAmigo(amigo2->getId(),amigo2));
	}
	catch (exception e)
	{
		System::Console::WriteLine((wchar_t)e.what());
		System::Console::WriteLine("ERROR: DataBase::inicializar()");
	}
}

hash_map<int, Amigo *> * DataBase::getAmigos(){
	return this->amigos;
}

hash_map<int, Emprestimo *> * DataBase::getEmprestimos(){
	return this->emprestimos;
}

hash_map<int, Livro *> * DataBase::getLivros(){
	return this->livros;
}

hash_map<int, MidiaAudio *> * DataBase::getMidiasAudio(){
	return this->midias_audio;
}

hash_map<int, MidiaFilme *> * DataBase::getMidiasFilme(){
	return this->midias_filme;
}