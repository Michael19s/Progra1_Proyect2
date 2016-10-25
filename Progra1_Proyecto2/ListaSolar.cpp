#include "ListaSolar.h"


ListaSolar::ListaSolar()
{
	primero = NULL;
}


ListaSolar::~ListaSolar()
{
	while(!estaVacia()){
		eliminaInicio();
	}
}

bool ListaSolar::estaVacia() const {
	return primero == NULL;
}

void ListaSolar::agregaInicio(Solar* e) {
	primero = new NodoSolar(e, primero);
}

void ListaSolar::agregaFinal(Solar* e) {
	if(estaVacia()){
		agregaInicio(e);
	}
	else {
		NodoSolar* actual = primero;
		while(actual->getSiguiente()) {
			actual = actual->getSiguiente();
		}
		actual->setSiguiente(new NodoSolar(e));
	}
}




void ListaSolar::agrega(Solar* e, unsigned int p){
	if(p == 0 || estaVacia()){
		agregaInicio(e);
	}else{
		unsigned int i=0;
		NodoSolar *actual = primero;
		while(i+1 < p && actual->getSiguiente()){
			actual = actual->getSiguiente();
			i++;
		}
		actual->setSiguiente(new NodoSolar(e, actual->getSiguiente()));
		
	}
	
}

void ListaSolar::eliminaInicio(){
	if(!estaVacia()){
		NodoSolar *actual = primero;
		primero = primero->getSiguiente();
		delete actual;
	}
}

void ListaSolar::eliminaFinal(){
	if(!estaVacia()){
		NodoSolar *anterior = primero;
		NodoSolar *actual = primero->getSiguiente();
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

void ListaSolar::elimina(unsigned int p){
	if(!estaVacia()){
		if(p==0){
			eliminaInicio();
		}else{
			unsigned int i=0;
			NodoSolar *actual=primero;
			while(i+1 < p && actual->getSiguiente()){
				actual = actual->getSiguiente();
				i++;
			}
			NodoSolar *aux = actual->getSiguiente();
			if(aux){
				actual->setSiguiente(aux->getSiguiente());
				delete aux;
			}
		}
	}
	
}


int ListaSolar::longitud() {
	int cantidad = 0;
	NodoSolar* actual = primero;
	while(actual){
		actual = actual -> getSiguiente();
		cantidad++;
	}
	return cantidad;
}

bool ListaSolar::buscar(Solar* e){
	NodoSolar* actual=primero;
	while(actual){
		if(actual->getElemento()==e){
			return true;
		}
		actual=actual->getSiguiente();
	}
	return false;
}

string ListaSolar::buscarNombre(string nom){ 
	stringstream s;
	NodoSolar *actual=NULL;
	actual=primero;
	if(primero==NULL){
		s<<"Ese solar no se encuentra disponible "<<endl;
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

string ListaSolar::toString() const { 
	stringstream s;
	NodoSolar* actual = primero;
	while(actual){
		s<<actual->getElemento()<<endl;
		actual = actual ->getSiguiente();
	}
	return s.str();
}