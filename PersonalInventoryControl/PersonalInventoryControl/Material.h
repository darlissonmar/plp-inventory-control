#ifndef MATERIAL_H
#define MATERIAL_H

#include <string>

using namespace std;

class Material
{
public:
	//Destrutor virtual. Todas as subclasses deve implementar o proprio destrutor.
	virtual ~Material();

	const int getId() const;
	void setId(int id);
	const bool isDisponivel() const;
	void setDisponivel(bool disponivel);
	const string getTitulo() const;
	void setTitulo(string titulo);
	const int getAno() const;
	void setAno(int ano);

	//Método puramente virtual, torna a classe não instanciável.
	virtual void defAbstract()=0;	
private:
	int id;
	bool disponivel;
	string titulo;
	int ano;	
};

#endif // MATERIAL_H
