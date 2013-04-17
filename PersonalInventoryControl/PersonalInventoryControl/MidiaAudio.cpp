#include "stdafx.h"

MidiaAudio::MidiaAudio(EnumTipoMidia::Tipo tipoMidia):tipoMidia(tipoMidia)
{
	this->setDisponivel(true);
}

MidiaAudio::MidiaAudio(int id, bool disponivel, string titulo, int ano, string album, 
	string artista, int volume, string genero, string gravadora, EnumTipoMidia::Tipo tipoMidia):
	album(album), artista(artista), volume(volume), genero(genero), gravadora(gravadora), tipoMidia(tipoMidia)
{
	this->setId(id);
	this->setDisponivel(disponivel);
	this->setTitulo(titulo);
	this->setAno(ano);

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

