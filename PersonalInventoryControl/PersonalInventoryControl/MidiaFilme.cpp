#include "stdafx.h"

MidiaFilme::MidiaFilme(EnumTipoMidia::Tipo tipoMidia):tipoMidia(tipoMidia)
{
	this->setDisponivel(true);
}

MidiaFilme::MidiaFilme(int id, bool disponivel, string titulo, int ano, 
	string genero, string atores, string produtor, string diretor, EnumTipoMidia::Tipo tipoMidia):
		genero(genero), atores(atores), produtor(produtor), diretor(diretor), tipoMidia(tipoMidia)
{
	this->setId(id);
	this->setDisponivel(disponivel);
	this->setTitulo(titulo);
	this->setAno(ano);
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

const string MidiaFilme::getAtores() const
{
	return this->atores;
}

void MidiaFilme::setAtores(string atores)
{
	this->atores=atores;
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

const EnumTipoMidia::Tipo MidiaFilme::getTipoMidia()
{
	return this->tipoMidia;
}

void MidiaFilme::setTipoMidia(EnumTipoMidia::Tipo tipoMidia)
{
	this->tipoMidia = tipoMidia;
}

