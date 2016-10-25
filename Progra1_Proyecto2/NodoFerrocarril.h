#pragma once
#include<iostream>
using namespace std;
#include "Ferrocarril.h"

class NodoFerrocarril
{
private:
Ferrocarril* elemento;
NodoFerrocarril* siguiente;

public:
	NodoFerrocarril(Ferrocarril* e, NodoFerrocarril* s = NULL);
	~NodoFerrocarril();
	Ferrocarril* getElemento() const;
	NodoFerrocarril* getSiguiente();
	void setElemento(Ferrocarril* e);
	void setSiguiente(NodoFerrocarril* n);
	string toString();
	string buscaNombre();

};
