#include "stdafx.h"

MidiaDados::MidiaDados(EnumTipoMidia::Tipo tipoMidia):tipoMidia(tipoMidia)
{
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
