#pragma once
class ControllerMidiaAudio : public ICrud<MidiaAudio> 
{
public:
	ControllerMidiaAudio(void);
	~ControllerMidiaAudio(void);

	list<MidiaAudio *> * buscarTodos();
	list<MidiaAudio *> * buscarDisponiveis();
	list<MidiaAudio *> * buscarIndisponiveis();

	bool adicionar(MidiaAudio* element);
	bool atualizar(MidiaAudio* element);
	bool deletar(int idObj);
	MidiaAudio* buscar(string attr);

private:
	DataBase* dataBase;
};

