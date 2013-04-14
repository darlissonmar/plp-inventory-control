#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H

class Emprestimo
{

public:
	Emprestimo(Amigo* amigo, Material* material);
	~Emprestimo();

	const Amigo* getAmigo() const;
	const Material* getMaterial() const;

	const int getId() const;
	void setId(int id);
	const long getDataEmprestimo() const;
	void setDataEmprestimo(long dataEmprestimo);
	const long getDataDevolucao() const;
	void setDataDevolucao(long dataDevolucao);
	const int getPrazoDias() const;
	void setPrazoDias(int prazoDias);


private:

	Amigo* amigo;
	Material* material;

	int id;
	long dataEmprestimo;
	long dataDevolucao;
	int prazoDias;
};

#endif // EMPRESTIMO_H
