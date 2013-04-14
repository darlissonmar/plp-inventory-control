#include "stdafx.h"

Emprestimo::Emprestimo(Amigo* amigo, Material* material):amigo(amigo), material(material)
{
}

Emprestimo::~Emprestimo()
{
}

const Amigo* Emprestimo::getAmigo() const
{
	return this->amigo;
}

const Material* Emprestimo::getMaterial() const
{
	return this->material;
}

const int Emprestimo::getId() const
{
	return this->id;
}

void Emprestimo::setId(int id)
{
	this->id = id;
}

const long int Emprestimo::getDataEmprestimo() const
{
	return this->dataEmprestimo;
}

void Emprestimo::setDataEmprestimo(long int dataEmprestimo)
{
	this->dataEmprestimo = dataEmprestimo;
}

const long int Emprestimo::getDataDevolucao() const
{
	return this->dataDevolucao;
}

void Emprestimo::setDataDevolucao(long int dataDevolucao)
{
	this->dataDevolucao = dataDevolucao;
}

const int Emprestimo::getPrazoDias() const
{
	return this->prazoDias;
}

void Emprestimo::setPrazoDias(int prazoDias)
{
	this->prazoDias = prazoDias;
}



