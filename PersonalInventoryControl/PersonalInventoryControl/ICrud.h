#ifndef ICRUD_H
#define ICRUD_H

template<class T>
class ICrud
{
public:

	virtual ~ICrud(void)
	{
	}

	virtual bool adicionar(T* element)=0;
	virtual bool atualizar(T* element)=0;
	virtual bool deletar(int idObj)=0;
	virtual T* buscar(string attr)=0;

};

#endif