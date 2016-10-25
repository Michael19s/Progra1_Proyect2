#pragma once
#include <string>
#include <sstream>
using namespace std;

#include "NodoServicioPublico.h"

class ListaServicioPublico
{
private:
NodoServicioPublico* primero;
public:
	ListaServicioPublico();
	~ListaServicioPublico();
	bool estaVacia() const;
	void agregaInicio(ServicioPublico* e);
	void agregaFinal(ServicioPublico* e);
	void agrega(ServicioPublico* e, unsigned int p);
	
	void eliminaInicio();
	void eliminaFinal();
	void elimina(unsigned int p);
	
	int longitud();
	bool buscar(ServicioPublico* e);
	string buscarNombre(string);
	string toString() const;
};


