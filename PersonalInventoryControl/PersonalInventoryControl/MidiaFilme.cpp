#include "stdafx.h"

MidiaFilme::MidiaFilme(EnumTipoMidia::Tipo tipoMidia):tipoMidia(tipoMidia)
{
}

MidiaFilme::~MidiaFilme()
{
}

const string MidiaFilme::getGenero() const
{
	return this->genero;
}

void MidiaFilme::setGenero(string genero)
{
	this->genero = genero;
}

const list< string > MidiaFilme::getAtores() const
{
	return this->atores;
}

void MidiaFilme::adicionarAtor(string ator)
{
	this->atores.push_back(ator);
}

void MidiaFilme::removerAtor(string ator)
{
	this->atores.remove(ator);
}

const string MidiaFilme::getProdutor() const
{
	return this->produtor;
}

void MidiaFilme::setProdutor(string produtor)
{
	this->produtor = produtor;
}

const string MidiaFilme::getDiretor() const
{
	return this->diretor;
}

void MidiaFilme::setDiretor(string diretor)
{
	this->diretor = diretor;
}


