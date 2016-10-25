#pragma once
#include<iostream>
using namespace std;
#include "Solar.h"

class NodoSolar
{
private:
Solar* elemento;
NodoSolar* siguiente;

public:
	NodoSolar(Solar* e, NodoSolar* s = NULL);
	~NodoSolar();
	Solar* getElemento() const;
	NodoSolar* getSiguiente();
	void setElemento(Solar* e);
	void setSiguiente(NodoSolar* n);
	string toString();
	string buscaNombre();

};

