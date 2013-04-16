#ifndef DATABASE_H
#define DATABASE_H
#include "stdafx.h"
#include <list>
#include <hash_map>

using namespace std;

typedef pair <const int, Amigo *> ParAmigo;
typedef pair <const int, Emprestimo *> ParEmprestimo;
typedef pair <const int, MidiaFilme *> ParFilme;
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
	
	void insertAmigo(Amigo* amigo);
	void insertEmprestimo(Emprestimo* emprestimo);


private:
	static DataBase* dataBaseInstance;
	DataBase(void);

	hash_map<int, Amigo *> *amigos;
	hash_map<int,Emprestimo *> *emprestimos;
	hash_map<int,MidiaAudio *> *midias_audio;
	hash_map<int,MidiaFilme *> *midias_filme;
	hash_map<int,MidiaDados *> *midias_dados;
	
	int amigo_db_indice;
	int material_db_indice;
	int emprestimo_db_indice;
};

#endif