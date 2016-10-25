#include "NodoSolar.h"


NodoSolar::NodoSolar(Solar* e, NodoSolar* s)
{
	elemento = e;
	siguiente = s;
}


NodoSolar::~NodoSolar(void)
{
}

Solar* NodoSolar::getElemento() const {
	return elemento;
}

NodoSolar* NodoSolar::getSiguiente() {
	return siguiente;
}

void NodoSolar::setElemento(Solar* e) {
	elemento = e;
}

void NodoSolar::setSiguiente(NodoSolar* n) {
	siguiente = n;
}

string NodoSolar::toString()
{
	stringstream s;
	s<<elemento->toString()<<endl;
	return s.str();
}

string NodoSolar::buscaNombre(){
	return elemento->getNombre();
}