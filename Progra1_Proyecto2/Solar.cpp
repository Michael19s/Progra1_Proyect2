#include "Solar.h"


Solar::Solar(): Casilla()
{
	aNombre=" ";
	 aRenta=0;
	aPrecioTerreno=0;
	aPrecioConstruccion=0;
	 aPrecioHipotecario=0;
	aCantidadCasas=0;
	aColor=" ";
}


Solar::~Solar()
{
}
Solar::Solar(string pNom,int pRent,int pPrecTerre,int pPrecConst,int pHipote,int pCantCasa,string pColor): Casilla(pNom){

	aRenta=pRent;
	aPrecioTerreno=pPrecTerre;
	aPrecioConstruccion=pPrecConst;
	aPrecioHipotecario=pHipote;
	aCantidadCasas=pCantCasa;
	aColor=pColor;
}
string Solar::getNombre(){
	return aNombre;
}
int Solar::getRenta(){
	return aRenta;
}
int Solar::getPrecioTerreno(){
	return aPrecioTerreno;
}
int Solar::getPrecioConstruccion(){
	return aPrecioConstruccion;
}
int Solar::getPrecioHipotecario(){
	return aPrecioHipotecario;
}
int Solar::getCantidadCasa(){
	return aCantidadCasas;
}
string Solar::getColor(){
	return aColor;
}



string Solar::toString(){
	stringstream s;
	s<<Casilla::toString();
	s<<"Renta :"<<aRenta<<endl;
	s<<"Precio del Terreno :"<<aPrecioTerreno<<endl;
	s<<"Precio por construccion : "<<aPrecioConstruccion<<endl
	<<"Precio hipotecario :"<<aPrecioHipotecario<<endl
	<<"Cantidad de Casa :"<<aCantidadCasas<<endl
	<<"Color del Terreno :"<<aColor<<endl;
	return s.str();
}