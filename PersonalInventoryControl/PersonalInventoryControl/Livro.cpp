#include "stdafx.h"

Livro::Livro()
{
}

Livro::Livro(int id, bool disponivel, string titulo, int ano, string autor, string area, int edicao, string editora, int volume):
		autor(autor), area(area), edicao(edicao), editora(editora), volume(volume)
{
	this->setId(id);
	this->setTitulo(titulo);
	this->setDisponivel(disponivel);
	this->setAno(ano);
}


Livro::~Livro()
{
	this->setDisponivel(true);
}


const string Livro::getAutor() const
{
    return this->autor;
}

void Livro::setAutor(string autor)
{
    this->autor = autor;
}

const string Livro::getArea() const
{
    return this->area;
}

void Livro::setArea(string area)
{
    this->area = area;
}

const int Livro::getEdicao() const
{
    return this->edicao;
}

void Livro::setEdicao(int edicao)
{
    this->edicao = edicao;
}

const string Livro::getEditora() const
{
    return this->editora;
}

void Livro::setEditora(string editora)
{
    this->editora = editora;
}

const int Livro::getVolume() const
{
    return this->volume;
}

void Livro::setVolume(int volume)
{
    this->volume = volume;
}
