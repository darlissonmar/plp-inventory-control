#include "stdafx.h"

MidiaAudio::MidiaAudio(EnumTipoMidia::Tipo tipoMidia):tipoMidia(tipoMidia)
{
}

MidiaAudio::~MidiaAudio()
{
}

const string MidiaAudio::getAlbum() const
{
    return this->album;
}

void MidiaAudio::setAlbum(string album)
{
    this->album = album;
}

const string MidiaAudio::getArtista() const
{
    return this->artista;
}

void MidiaAudio::setArtista(string artista)
{
    this->artista = artista;
}

const int MidiaAudio::getVolume() const
{
    return this->volume;
}

void MidiaAudio::setVolume(int volume)
{
    this->volume = volume;
}

const string MidiaAudio::getGenero() const
{
    return this->genero;
}

void MidiaAudio::setGenero(string genero)
{
    this->genero = genero;
}

const string MidiaAudio::getGravadora() const
{
    return this->gravadora;
}

void MidiaAudio::setGravadora(string gravadora)
{
    this->gravadora = gravadora;
}

