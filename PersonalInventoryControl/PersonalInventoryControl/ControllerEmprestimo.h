#pragma once

class ControllerEmprestimo : public ICrud<Emprestimo>
{
public:
	ControllerEmprestimo(void);
	~ControllerEmprestimo(void);

	list<Emprestimo *> * buscarTodos();
	list<Emprestimo *> * buscarEmpAbertos();
	list<Emprestimo *> * buscarEmpFechados();
	list<Emprestimo *> * buscarEmpVencidos();
	
	
	bool adicionar(Emprestimo* element);
	bool atualizar(Emprestimo* element);
	bool deletar(int idObj);
	Emprestimo* buscar(string attr);
	Emprestimo* buscarPorMatTitulo(string attr);



private:
	DataBase* dataBase;


};

