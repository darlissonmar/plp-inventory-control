#pragma once
class ControllerLivro : public ICrud<Livro>
{
public:
	ControllerLivro(void);
	~ControllerLivro(void);

	list<Livro *> * buscarTodos();
	list<Livro *> * buscarDisponiveis();
	list<Livro *> * buscarIndisponiveis();
	
	bool adicionar(Livro* element);
	bool atualizar(Livro* element);
	bool deletar(int idObj);
	Livro* buscar(string attr);

private:
	DataBase* dataBase;
};

