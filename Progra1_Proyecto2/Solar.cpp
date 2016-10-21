#include "Solar.h"


Solar::Solar(): Casilla()
{
	_Nombre=" ";
	 _Renta=0;
	_PrecioTerreno=0;
	_PrecioConstruccion=0;
	 _PrecioHipotecario=0;
	_CantidadCasas=0;
	_Color=" ";
}


Solar::~Solar()
{
}
Solar::Solar(string pNom,int pRent,int pPrecTerre,int pPrecConst,int pHipote,int pCantCasa,string pColor): Casilla(pNom){

	_Renta=pRent;
	_PrecioTerreno=pPrecTerre;
	_PrecioConstruccion=pPrecConst;
	_PrecioHipotecario=pHipote;
	_CantidadCasas=pCantCasa;
	_Color=pColor;
}
string Solar::getNombre(){
	return _Nombre;
}
int Solar::getRenta(){
	return _Renta;
}
int Solar::getPrecioTerreno(){
	return _PrecioTerreno;
}
int Solar::getPrecioConstruccion(){
	return _PrecioConstruccion;
}
int Solar::getPrecioHipotecario(){
	return _PrecioHipotecario;
}
int Solar::getCantidadCasa(){
	return _CantidadCasas;
}
string Solar::getColor(){
	return _Color;
}
string Solar::toString(){
	stringstream s;
	s<<Casilla::toString();
	s<<"Renta :"<<_Renta<<endl;
	s<<"Precio del Terreno :"<<_PrecioTerreno<<endl;
	s<<"Precio por construccion : "<<_PrecioConstruccion<<endl
	<<"Precio hipotecario :"<<_PrecioHipotecario<<endl
	<<"Cantidad de Casa :"<<_CantidadCasas<<endl
	<<"Color del Terreno :"<<_Color<<endl;
	return s.str();
}