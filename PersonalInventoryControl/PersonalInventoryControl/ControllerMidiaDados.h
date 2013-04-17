#pragma once
class ControllerMidiaDados : public ICrud<MidiaDados>
{
public:
	ControllerMidiaDados(void);
	~ControllerMidiaDados(void);

	list<MidiaDados *> * buscarTodos();
	list<MidiaDados *> * buscarDisponiveis();
	list<MidiaDados *> * buscarIndisponiveis();

	bool adicionar(MidiaDados* element);
	bool atualizar(MidiaDados* element);
	bool deletar(int idObj);
	MidiaDados* buscar(string attr);

private:
	DataBase* dataBase;


};

