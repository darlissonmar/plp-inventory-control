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

void DataBase::insertMidiaDados(MidiaDados* midiaDados){
	if(midiaDados){
		midiaDados->setId(midiadados_db_indice++);
		this->midias_dados->insert(ParMidiaDados(midiaDados->getId(), midiaDados));
	}else{
		throw new exception;
	}
}

void DataBase::inicializar( void )
{
	// Objetos carregados em memoria
	// Lista de amigos
	Amigo *amigo1 = new Amigo(amigo_db_indice++,"Joao", "dos Santos", "joao@jmail.com","2123-1234","Masculino","Rua das mangueiras");
	Amigo *amigo2 = new Amigo(amigo_db_indice++,"Pedro", "da Silva", "pedro@jmail.com","2123-4321", "Masculino", "Rua das Laranjeiras");

	//Lista de Livros
	Livro *livro1 = new Livro(livro_db_indice++, true,"Game of Thrones: Gelo e Fogo", 2010, "Gerger Martin", "Ficção",1,"Winterfel",1);
	Livro *livro2 = new Livro(livro_db_indice++, false,"Senhor dos Aneis: A Sociedade do Anel", 2010, "J.K Tolkien", "Ficção",1,"Terra Media",1);

	//Lista de Midia de Audio
	MidiaAudio *midia_audio1 = new MidiaAudio(midiaaudio_db_indice++,true,"Cd Legiao", 1998,"Mais do Mesmo", "Legiao Urbana",1,"Rock","Sony Music",EnumTipoMidia::CD);
	MidiaAudio *midia_audio2 = new MidiaAudio(midiaaudio_db_indice++,true,"Dvd Paralamas", 1999,"Alagados", "Paralamans do Sucesso",1,"Rock","Universal Music",EnumTipoMidia::DVD);
	MidiaAudio *midia_audio3 = new MidiaAudio(midiaaudio_db_indice++,true,"Blu-ray Paralamas", 2011,"Alagados", "Paralamans do Sucesso",1,"Rock","Universal Music",EnumTipoMidia::BLURAY);
	MidiaAudio *midia_audio4 = new MidiaAudio(midiaaudio_db_indice++,true,"Blu-ray Paralamas", 2011,"Alagados", "Paralamans do Sucesso",1,"Rock","Universal Music",EnumTipoMidia::BLURAY);
	
	//Lista de Midia de Filme
	MidiaFilme *midia_filme1 = new MidiaFilme(midiafilme_db_indice++, true,"Avatar", 2009,"Ficção Científica ","Sam Worthington, Sigourney Weaver", "James Cameron", "James Cameron",EnumTipoMidia::DVD);
	
	//Lista de Midia de Dados
	MidiaDados *midia_dados1 = new MidiaDados(midiadados_db_indice++,true, "Material da aula de PLP",2013, "Este DVD contem as aulas de PLP", EnumTipoMidia::DVD);
	
	//Lista de Emprestimos 
	Emprestimo* emprestimo1 = new Emprestimo(emprestimo_db_indice++, "20-04-2013","",4,false,amigo1,(Material*) midia_audio1);

	try
	{
		// Adicionando amigos
		this->amigos->insert(ParAmigo(amigo1->getId(),amigo1));
		this->amigos->insert(ParAmigo(amigo2->getId(),amigo2));
		
		// Adicionando Livros
		this->livros->insert(ParLivro(livro1->getId(), livro1));
		this->livros->insert(ParLivro(livro2->getId(), livro2));

		// Adicionando midia audio
		this->midias_audio->insert(ParMidiaAudio(midia_audio1->getId(), midia_audio1));
		this->midias_audio->insert(ParMidiaAudio(midia_audio2->getId(), midia_audio2));
		this->midias_audio->insert(ParMidiaAudio(midia_audio3->getId(), midia_audio3));
		this->midias_audio->insert(ParMidiaAudio(midia_audio4->getId(), midia_audio4));
		
		// Adicionando midia filme
		this->midias_filme->insert(ParMidiaFilme(midia_filme1->getId(), midia_filme1));
		// Adicionando midia dados
		this->midias_dados->insert(ParMidiaDados(midia_dados1->getId(),midia_dados1));
		// Adicionando Emprestimos
		this->emprestimos->insert(ParEmprestimo(emprestimo1->getId(), emprestimo1));
		
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

hash_map<int, MidiaDados *> * DataBase::getMidiasDados(){
	return this->midias_dados;
}