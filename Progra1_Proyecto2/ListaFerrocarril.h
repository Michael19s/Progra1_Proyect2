#pragma once
#include <string>
#include <sstream>
using namespace std;

#include "NodoFerrocarril.h"

class ListaFerrocarril
{
private:
NodoFerrocarril* primero;
public:
	ListaFerrocarril();
	~ListaFerrocarril();
	bool estaVacia() const;
	void agregaInicio(Ferrocarril* e);
	void agregaFinal(Ferrocarril* e);
	void agrega(Ferrocarril* e, unsigned int p);
	
	void eliminaInicio();
	void eliminaFinal();
	void elimina(unsigned int p);
	
	int longitud();
	bool buscar(Ferrocarril* e);
	string buscarNombre(string);
	string toString() const;
};

