#include "Casilla.h"


Casilla::Casilla()
{
	_Nombre=" ";
}


Casilla::~Casilla()
{
}
Casilla::Casilla(string pNom){
	_Nombre=pNom;
}
string Casilla::toString(){
	stringstream s;
	s<<"Nombre :"<<_Nombre<<endl;
	return s.str();
}
 string Casilla::getNombre(){
	 return _Nombre;
 }