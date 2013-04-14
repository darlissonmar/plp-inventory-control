#ifndef AMIGO_H
#define AMIGO_H

#include <string>

using namespace std;

class Amigo
{

public:
	Amigo();
	~Amigo();

	const int getId() const;
	void setId(int id);
	const string getNome() const;
	void setNome(string nome);
	const string getSobrenome() const;
	void setSobrenome(string sobrenome);
	const string getEmail() const;
	void setEmail(string email);
	const string getTelefone() const;
	void setTelefone(string telefone);
	const string getGenero() const;
	void setGenero(string genero);
	const string getEndereco() const;
	void setEndereco(string endereco);


private:
	int id;	
	string nome;
	string sobrenome;
	string email;
	string telefone;
	string genero;
	string endereco;
};

#endif // AMIGO_H
