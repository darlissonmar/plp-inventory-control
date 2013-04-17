#ifndef DATABASE_H
#define DATABASE_H
#include "stdafx.h"
#include <list>
#include <hash_map>

using namespace std;

typedef pair <const int, Amigo *> ParAmigo;
typedef pair <const int, Emprestimo *> ParEmprestimo;
typedef pair <const int, MidiaFilme *> ParMidiaFilme;
typedef pair <const int, MidiaAudio *> ParMidiaAudio;
typedef pair <const int, MidiaDados *> ParMidiaDados;
typedef pair <const int, Livro *> ParLivro;


class DataBase
{
public:
	static DataBase* getInstance();
	~DataBase(void);

	void inicializar(void);

	hash_map<int, Amigo *> *getAmigos();
	hash_map<int, Emprestimo *> *getEmprestimos();
	hash_map<int, Livro *> *getLivros();
	hash_map<int, MidiaAudio *> *getMidiasAudio();
	hash_map<int, MidiaFilme *> *getMidiasFilme();
	hash_map<int, MidiaDados *> *getMidiasDados();


	
	void insertAmigo(Amigo* amigo);
	void insertEmprestimo(Emprestimo* emprestimo);
	void insertLivro(Livro* livro);
	void insertMidiaAudio(MidiaAudio* midiaAudio);
	void insertMidiaFilme(MidiaFilme* midiaFilme);
	void insertMidiaDados(MidiaDados* midiaDados);

private:
	static DataBase* dataBaseInstance;
	DataBase(void);

	hash_map<int, Amigo *> *amigos;
	hash_map<int,Emprestimo *> *emprestimos;

	hash_map<int,Livro *> *livros;
	hash_map<int,MidiaAudio *> *midias_audio;
	hash_map<int,MidiaFilme *> *midias_filme;
	hash_map<int,MidiaDados *> *midias_dados;
	
	int amigo_db_indice;
	int livro_db_indice;
	int midiafilme_db_indice;
	int midiaaudio_db_indice;
	int midiadados_db_indice;
	int emprestimo_db_indice;
};

#endif