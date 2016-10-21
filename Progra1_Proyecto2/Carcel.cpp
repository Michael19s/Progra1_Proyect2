#include "Carcel.h"


Carcel::Carcel(): Casilla()
{
}
Carcel::Carcel(string pNom): Casilla(pNom){
	
}
Carcel::~Carcel()
{
}
string Carcel::getNombre(){
	return _Nombre;
}
bool Carcel::cobrar(/*Jugador *pA,Banco *pC*/){
	//int restante=0;
	//restante=pA->getCapital-multa;
	//if(restante>0){
	//	pA->setCapital(restante);
	//	pC->setCapital(pC->getCapital+multa);
	//}else{
	//	return false;
	//}
	return true;
}
int Carcel::multa(){
	int lvX;
	srand(time(NULL));
	lvX=20+ rand()%301;
	return lvX;
}
string Carcel::toString(){
	stringstream s;
	s<<Casilla::toString();
	return s.str();
}