#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H

class Emprestimo
{

public:
	Emprestimo(Amigo* amigo, Material* material);
	Emprestimo(int id, string dataEmprestimo, string dataDevolucao, int prazoDias, bool atrasado, Amigo* amigo, Material* material);
	~Emprestimo();

	Amigo* getAmigo();
	Material* getMaterial();

	const int getId() const;
	void setId(int id);
	const string getDataEmprestimo() const;
	void setDataEmprestimo(string dataEmprestimo);
	const string getDataDevolucao() const;
	void setDataDevolucao(string dataDevolucao);
	const int getPrazoDias() const;
	void setPrazoDias(int prazoDias);
	bool isAtrasado();
	void setAtrasado(bool atrasado);
private:

	Amigo* amigo;
	Material* material;

	int id;
	string dataEmprestimo;
	string dataDevolucao;
	int prazoDias;
	bool atrasado;
};

#endif // EMPRESTIMO_H
