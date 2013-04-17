#pragma once
class ControllerMidiaFilme: public ICrud<MidiaFilme>
{
public:
	ControllerMidiaFilme(void);
	~ControllerMidiaFilme(void);

	list<MidiaFilme *> * buscarTodos();
	list<MidiaFilme *> * buscarDisponiveis();
	list<MidiaFilme *> * buscarIndisponiveis();

	bool adicionar(MidiaFilme* element);
	bool atualizar(MidiaFilme* element);
	bool deletar(int idObj);
	MidiaFilme* buscar(string attr);

private:
	DataBase* dataBase;
};

