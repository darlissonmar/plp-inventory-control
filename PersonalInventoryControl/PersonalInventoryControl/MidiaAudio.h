#ifndef MIDIAAUDIO_H
#define MIDIAAUDIO_H

#include "Material.h"
#include "EnumTipoMidia.h"

class MidiaAudio : public Material
{

public:
     MidiaAudio(EnumTipoMidia::Tipo tipoMidia);
	 MidiaAudio(int id, bool disponivel, string titulo, int ano, string album, string artista, int volume, string genero, string gravadora, EnumTipoMidia::Tipo tipoMidia);
    ~MidiaAudio();
    
     const string getAlbum() const;
     void setAlbum(string album);
     const string getArtista() const;
     void setArtista(string artista);
     const int getVolume() const;
     void setVolume(int volume);
     const string getGenero() const;
     void setGenero(string genero);
     const string getGravadora() const;
     void setGravadora(string gravadora);

	 const EnumTipoMidia::Tipo getTipoMidia(){return tipoMidia;};

	 //Implementa o metodo puramente virtual
	 void defAbstract(){return;}
    
private:  
     string album;
     string artista;
     int volume;
     string genero;
     string gravadora; 
	 
	 EnumTipoMidia::Tipo tipoMidia;
};

#endif // MIDIAAUDIO_H
