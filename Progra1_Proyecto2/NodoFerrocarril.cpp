#include "NodoFerrocarril.h"


NodoFerrocarril::NodoFerrocarril(Ferrocarril* e, NodoFerrocarril* s)
{
	elemento = e;
	siguiente = s;
}


NodoFerrocarril::~NodoFerrocarril(void)
{
}

Ferrocarril* NodoFerrocarril::getElemento() const {
	return elemento;
}

NodoFerrocarril* NodoFerrocarril::getSiguiente() {
	return siguiente;
}

void NodoFerrocarril::setElemento(Ferrocarril* e) {
	elemento = e;
}

void NodoFerrocarril::setSiguiente(NodoFerrocarril* n) {
	siguiente = n;
}

string NodoFerrocarril::toString()
{
	stringstream s;
	s<<elemento->toString()<<endl;
	return s.str();
}

string NodoFerrocarril::buscaNombre(){
	return elemento->getNombre();
}