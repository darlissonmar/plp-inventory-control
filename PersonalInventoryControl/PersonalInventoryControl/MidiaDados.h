#ifndef MIDIADADOS_H
#define MIDIADADOS_H

#include "Material.h"
#include "EnumTipoMidia.h"


class MidiaDados : public Material
{

public:
	MidiaDados(EnumTipoMidia::Tipo tipoMidia);
	~MidiaDados();

	const string getDescricao();
	void setDescricao(string descricao);

	const EnumTipoMidia::Tipo getTipoMidia(){return tipoMidia;};

	//Implementa o metodo puramente virtual
	void defAbstract(){return;}

private:
	string descricao;

	EnumTipoMidia::Tipo tipoMidia;
};

#endif // MIDIADADOS_H
