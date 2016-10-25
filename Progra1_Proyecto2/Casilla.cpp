#include "Casilla.h"


Casilla::Casilla()
{
	aNombre=" ";
}


Casilla::~Casilla()
{
}
Casilla::Casilla(string pNom){
	aNombre=pNom;
}
string Casilla::toString(){
	stringstream s;
	s<<"Nombre :"<<aNombre<<endl;
	return s.str();
}
 string Casilla::getNombre(){
	 return aNombre;
 }