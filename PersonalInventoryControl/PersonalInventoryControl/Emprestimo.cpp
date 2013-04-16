#include "stdafx.h"

Emprestimo::Emprestimo(Amigo* amigo, Material* material):amigo(amigo), material(material)
{
	this->atrasado=false;
}

Emprestimo::Emprestimo(int id, long dataEmprestimo, long dataDevolucao, int prazoDias, bool atrasado, Amigo* amigo, Material* material):
id(id), dataEmprestimo(dataEmprestimo), dataDevolucao(dataDevolucao), prazoDias(prazoDias), atrasado(atrasado), amigo(amigo), material(material)
{	
}

Emprestimo::~Emprestimo()
{
}

Amigo* Emprestimo::getAmigo()
{
	return this->amigo;
}

Material* Emprestimo::getMaterial()
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

bool Emprestimo::isAtrasado(){
	return this->atrasado;
}

void Emprestimo::setAtrasado(bool atrasado){
	this->atrasado=atrasado;
}



