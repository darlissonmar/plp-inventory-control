#include "stdafx.h"

Livro::Livro()
{
}

Livro::~Livro()
{
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
