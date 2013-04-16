
#include<list>

using namespace std;

class ControllerAmigo : public ICrud<Amigo>
{
public:
	ControllerAmigo(void);

	list<Amigo *> * buscarTodos();
	list<Amigo *> * buscarPontuais();
	list<Amigo *> * buscarImontuais();
	list<Amigo *> * buscarMaisPontuais();
	list<Amigo *> * buscarMaisImpontuais();

	bool adicionar(Amigo* element);
	bool atualizar(Amigo* element);
	bool deletar(int idObj);
	Amigo* buscar(string attr);
	
private:
	DataBase* dataBase;

};

