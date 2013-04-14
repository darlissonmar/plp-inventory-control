#include "stdafx.h"

Material::~Material()
{
}

const int Material::getId() const
{
    return this->id;
}

void Material::setId(int id)
{
    this->id = id;
}

const bool Material::isDisponivel() const
{
    return this->disponivel;
}

void Material::setDisponivel(bool disponivel)
{
  this->disponivel = disponivel;
}

const string Material::getTitulo() const
{
    return this->titulo;
}

void Material::setTitulo(string titulo)
{
    this->titulo = titulo;
}

const int Material::getAno() const
{
    return this->ano;
}

void Material::setAno(int ano)
{
    this->ano = ano;
}

