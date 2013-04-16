#pragma once
class ControllerEmprestimo : public ICrud<Emprestimo>
{
public:
	ControllerEmprestimo(void);
	~ControllerEmprestimo(void);
	
	
	bool adicionar(Emprestimo* element);
	bool atualizar(Emprestimo* element);
	bool deletar(int idObj);
	Emprestimo* buscar(string attr);

private:
	DataBase* dataBase;


};

