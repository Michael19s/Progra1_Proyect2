#include "ListaFerrocarril.h"


ListaFerrocarril::ListaFerrocarril()
{
	primero = NULL;
}


ListaFerrocarril::~ListaFerrocarril()
{
	while(!estaVacia()){
		eliminaInicio();
	}
}

bool ListaFerrocarril::estaVacia() const {
	return primero == NULL;
}

void ListaFerrocarril::agregaInicio(Ferrocarril* e) {
	primero = new NodoFerrocarril(e, primero);
}

void ListaFerrocarril::agregaFinal(Ferrocarril* e) {
	if(estaVacia()){
		agregaInicio(e);
	}
	else {
		NodoFerrocarril* actual = primero;
		while(actual->getSiguiente()) {
			actual = actual->getSiguiente();
		}
		actual->setSiguiente(new NodoFerrocarril(e));
	}
}




void ListaFerrocarril::agrega(Ferrocarril* e, unsigned int p){
	if(p == 0 || estaVacia()){
		agregaInicio(e);
	}else{
		unsigned int i=0;
		NodoFerrocarril *actual = primero;
		while(i+1 < p && actual->getSiguiente()){
			actual = actual->getSiguiente();
			i++;
		}
		actual->setSiguiente(new NodoFerrocarril(e, actual->getSiguiente()));
		
	}
	
}

void ListaFerrocarril::eliminaInicio(){
	if(!estaVacia()){
		NodoFerrocarril *actual = primero;
		primero = primero->getSiguiente();
		delete actual;
	}
}

void ListaFerrocarril::eliminaFinal(){
	if(!estaVacia()){
		NodoFerrocarril *anterior = primero;
		NodoFerrocarril *actual = primero->getSiguiente();
		if(!actual){
			eliminaInicio();
		}else{
			while(actual->getSiguiente()){
				anterior = actual;
				actual = actual->getSiguiente();
			}
			anterior->setSiguiente(NULL);
			delete actual;			
		}
		
	}
}

void ListaFerrocarril::elimina(unsigned int p){
	if(!estaVacia()){
		if(p==0){
			eliminaInicio();
		}else{
			unsigned int i=0;
			NodoFerrocarril *actual=primero;
			while(i+1 < p && actual->getSiguiente()){
				actual = actual->getSiguiente();
				i++;
			}
			NodoFerrocarril *aux = actual->getSiguiente();
			if(aux){
				actual->setSiguiente(aux->getSiguiente());
				delete aux;
			}
		}
	}
	
}


int ListaFerrocarril::longitud() {
	int cantidad = 0;
	NodoFerrocarril* actual = primero;
	while(actual){
		actual = actual -> getSiguiente();
		cantidad++;
	}
	return cantidad;
}

bool ListaFerrocarril::buscar(Ferrocarril* e){
	NodoFerrocarril* actual=primero;
	while(actual){
		if(actual->getElemento()==e){
			return true;
		}
		actual=actual->getSiguiente();
	}
	return false;
}

string ListaFerrocarril::buscarNombre(string nom){ 
	stringstream s;
	NodoFerrocarril *actual=NULL;
	actual=primero;
	if(primero==NULL){
		s<<"Ese Ferrocarril no se encuentra disponible "<<endl;
	}else{
		while(actual){
			if(actual->buscaNombre()==nom){
				s<<actual->toString();
				s<<endl;
		    }
			actual=actual->getSiguiente();
		}
	}
		return s.str();
}

string ListaFerrocarril::toString() const { 
	stringstream s;
	NodoFerrocarril* actual = primero;
	while(actual){
		s<<actual->getElemento()<<endl;
		actual = actual ->getSiguiente();
	}
	return s.str();
}