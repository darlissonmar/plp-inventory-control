
#include<list>

using namespace std;

class ControllerAmigo : public ICrud<Amigo>
{
public:
	ControllerAmigo(void);
	~ControllerAmigo(void);

	list<Amigo *> * buscarTodos();
	list<Amigo *> * buscarPontuais();
	list<Amigo *> * buscarImpontuais();
	Amigo * buscarMaisPontual();
	Amigo * buscarMaisImpontual();

	bool adicionar(Amigo* element);
	bool atualizar(Amigo* element);
	bool deletar(int idObj);
	Amigo* buscar(string attr);
	
private:
	DataBase* dataBase;

};

