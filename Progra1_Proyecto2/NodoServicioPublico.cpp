#include "NodoServicioPublico.h"


NodoServicioPublico::NodoServicioPublico(ServicioPublico* e, NodoServicioPublico* s)
{
	elemento = e;
	siguiente = s;
}


NodoServicioPublico::~NodoServicioPublico(void)
{
}

ServicioPublico* NodoServicioPublico::getElemento() const {
	return elemento;
}

NodoServicioPublico* NodoServicioPublico::getSiguiente() {
	return siguiente;
}

void NodoServicioPublico::setElemento(ServicioPublico* e) {
	elemento = e;
}

void NodoServicioPublico::setSiguiente(NodoServicioPublico* n) {
	siguiente = n;
}

string NodoServicioPublico::toString()
{
	stringstream s;
	s<<elemento->toString()<<endl;
	return s.str();
}

string NodoServicioPublico::buscaNombre(){
	return elemento->getNombre();
}