#ifndef MIDIAFILME_H
#define MIDIAFILME_H

#include "Material.h"
#include "EnumTipoMidia.h"
#include <list>

class MidiaFilme : public Material
{

public:
	MidiaFilme(EnumTipoMidia::Tipo tipoMidia);
	MidiaFilme(int id, bool disponivel, string titulo, int ano, 
		string genero, string atores, string produtor, string diretor, EnumTipoMidia::Tipo tipoMidia);
	~MidiaFilme();

	const string getGenero() const;
	void setGenero(string genero);
	const string getAtores() const;
	void setAtores(string atores);
	const string getProdutor() const;
	void setProdutor(string produtor);
	const string getDiretor() const;
	void setDiretor(string diretor); 

	const EnumTipoMidia::Tipo getTipoMidia(){return tipoMidia;};

	//Implementa o metodo puramente virtual
	void defAbstract(){return;}

private:
	string genero;
	string atores;
	string produtor;
	string diretor;

	EnumTipoMidia::Tipo tipoMidia;
};

#endif // MIDIAFILME_H
