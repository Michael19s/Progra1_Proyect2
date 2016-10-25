#pragma once
#include <string>
#include <sstream>
using namespace std;

#include "NodoSolar.h"

class ListaSolar
{
private:
NodoSolar* primero;
public:
	ListaSolar();
	~ListaSolar();
	bool estaVacia() const;
	void agregaInicio(Solar* e);
	void agregaFinal(Solar* e);
	void agrega(Solar* e, unsigned int p);
	
	void eliminaInicio();
	void eliminaFinal();
	void elimina(unsigned int p);
	
	int longitud();
	bool buscar(Solar* e);
	string buscarNombre(string);
	string toString() const;
};

