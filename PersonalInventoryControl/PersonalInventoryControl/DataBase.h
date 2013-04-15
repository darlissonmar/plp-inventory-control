#ifndef DATABASE_H
#define DATABASE_H
#include "stdafx.h"
#include <list>
#include <hash_map>

using namespace stdext;

class DataBase
{
public:
	DataBase(void);
	~DataBase(void);

	// FIXME: Metodo do controller amigo
	Amigo buscar_amigo(int amigo_id);

	void inicializar(void);

private:
	hash_map<int, Amigo> *amigos;
	hash_map<int,Emprestimo> *emprestimos;
	hash_map<int,MidiaAudio> *midias_audio;
	hash_map<int,MidiaFilme> *midias_filme;
	hash_map<int,MidiaDados> *midias_dados;
	
	int static amigo_db_indice;
	int static material_db_indice;
	int static emprestimo_db_indice;
};

#endif