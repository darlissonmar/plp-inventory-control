#include "stdafx.h"

MidiaDados::MidiaDados(EnumTipoMidia::Tipo tipoMidia):tipoMidia(tipoMidia)
{
	this->setDisponivel(true);
}

MidiaDados::MidiaDados(int id, bool disponivel, string titulo, int ano, string descricao, EnumTipoMidia::Tipo tipoMidia):
	descricao(descricao), tipoMidia(tipoMidia)
{
	this->setAno(ano);
	this->setDisponivel(disponivel);
	this->setTitulo(titulo);
	this->setAno(ano);
}

MidiaDados::~MidiaDados()
{
}

const string MidiaDados::getDescricao()
{
	return this->descricao;
}

void MidiaDados::setDescricao(string descricao)
{
	this->descricao = descricao;
}
