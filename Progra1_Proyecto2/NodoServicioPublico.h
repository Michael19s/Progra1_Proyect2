#pragma once
#include<iostream>
using namespace std;
#include "ServicioPublico.h"

class NodoServicioPublico
{
private:
ServicioPublico* elemento;
NodoServicioPublico* siguiente;
public:
	NodoServicioPublico(ServicioPublico* e, NodoServicioPublico* s = NULL);
	~NodoServicioPublico();
	ServicioPublico* getElemento() const;
	NodoServicioPublico* getSiguiente();
	void setElemento(ServicioPublico* e);
	void setSiguiente(NodoServicioPublico* n);
	string toString();
	string buscaNombre();
};
