#include "ListaServicioPublico.h"


ListaServicioPublico::ListaServicioPublico()
{
	primero = NULL;
}


ListaServicioPublico::~ListaServicioPublico()
{
	while(!estaVacia()){
		eliminaInicio();
	}
}

bool ListaServicioPublico::estaVacia() const {
	return primero == NULL;
}

void ListaServicioPublico::agregaInicio(ServicioPublico* e) {
	primero = new NodoServicioPublico(e, primero);
}

void ListaServicioPublico::agregaFinal(ServicioPublico* e) {
	if(estaVacia()){
		agregaInicio(e);
	}
	else {
		NodoServicioPublico* actual = primero;
		while(actual->getSiguiente()) {
			actual = actual->getSiguiente();
		}
		actual->setSiguiente(new NodoServicioPublico(e));
	}
}




void ListaServicioPublico::agrega(ServicioPublico* e, unsigned int p){
	if(p == 0 || estaVacia()){
		agregaInicio(e);
	}else{
		unsigned int i=0;
		NodoServicioPublico *actual = primero;
		while(i+1 < p && actual->getSiguiente()){
			actual = actual->getSiguiente();
			i++;
		}
		actual->setSiguiente(new NodoServicioPublico(e, actual->getSiguiente()));
		
	}
	
}

void ListaServicioPublico::eliminaInicio(){
	if(!estaVacia()){
		NodoServicioPublico *actual = primero;
		primero = primero->getSiguiente();
		delete actual;
	}
}

void ListaServicioPublico::eliminaFinal(){
	if(!estaVacia()){
		NodoServicioPublico *anterior = primero;
		NodoServicioPublico *actual = primero->getSiguiente();
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

void ListaServicioPublico::elimina(unsigned int p){
	if(!estaVacia()){
		if(p==0){
			eliminaInicio();
		}else{
			unsigned int i=0;
			NodoServicioPublico *actual=primero;
			while(i+1 < p && actual->getSiguiente()){
				actual = actual->getSiguiente();
				i++;
			}
			NodoServicioPublico *aux = actual->getSiguiente();
			if(aux){
				actual->setSiguiente(aux->getSiguiente());
				delete aux;
			}
		}
	}
	
}


int ListaServicioPublico::longitud() {
	int cantidad = 0;
	NodoServicioPublico* actual = primero;
	while(actual){
		actual = actual -> getSiguiente();
		cantidad++;
	}
	return cantidad;
}

bool ListaServicioPublico::buscar(ServicioPublico* e){
	NodoServicioPublico* actual=primero;
	while(actual){
		if(actual->getElemento()==e){
			return true;
		}
		actual=actual->getSiguiente();
	}
	return false;
}

string ListaServicioPublico::buscarNombre(string nom){ 
	stringstream s;
	NodoServicioPublico *actual=NULL;
	actual=primero;
	if(primero==NULL){
		s<<"Ese ServicioPublico no se encuentra disponible "<<endl;
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

string ListaServicioPublico::toString() const { 
	stringstream s;
	NodoServicioPublico* actual = primero;
	while(actual){
		s<<actual->getElemento()<<endl;
		actual = actual ->getSiguiente();
	}
	return s.str();
}