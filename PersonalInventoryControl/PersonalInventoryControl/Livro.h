#ifndef LIVRO_H
#define LIVRO_H

#include "Material.h"

class Livro: public Material
{
public:
	Livro();
    Livro(int id, bool disponivel, string titulo, int ano, string autor, string area, int edicao, string editora, int volume);
	~Livro();

    const string getAutor() const;
    void setAutor(string autor);
    const string getArea() const;
    void setArea(string area);
    const int getEdicao() const;
    void setEdicao(int edicao);
    const string getEditora() const;
    void setEditora(string editora);
    const int getVolume() const;
    void setVolume(int volume);
    
    //Implementa o metodo puramente virtual
    void defAbstract(){return;}

private:
    string autor;
    string area;
    int edicao;
    string editora;
    int volume;
};

#endif // LIVRO_H
