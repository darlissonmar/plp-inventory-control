#include "stdafx.h"

Amigo::Amigo()
{
}

Amigo::~Amigo()
{
}

const int Amigo::getId() const
{
	return this->id;
}

void Amigo::setId(int id)
{
	this->id = id;
}

const string Amigo::getNome() const
{
	return this->nome;
}

void Amigo::setNome(string nome)
{
	this->nome = nome;
}

const string Amigo::getSobrenome() const
{
	return this->sobrenome;
}

void Amigo::setSobrenome(string sobrenome)
{
	this->sobrenome = sobrenome;
}

const string Amigo::getEmail() const
{
	return this->email;
}

void Amigo::setEmail(string email)
{
	this->email = email;
}

const string Amigo::getTelefone() const
{
	return this->telefone;
}

void Amigo::setTelefone(string telefone)
{
	this->telefone = telefone;
}

const string Amigo::getGenero() const
{
	return this->genero;
}

void Amigo::setGenero(string genero)
{
	this->genero = genero;
}

const string Amigo::getEndereco() const
{
	return this->endereco;
}

void Amigo::setEndereco(string endereco)
{
	this->endereco = endereco;
}

