#include "Ferrocarril.h"


Ferrocarril::Ferrocarril()
{
	_Nombre=" ";
	aCantidadEstaciones=0;
	aValorHipotecario=0;
	aRenta=0;
	aPrecioTerreno=0;
}

Ferrocarril::Ferrocarril(string pNom, int pCantidadEstaciones, int pValorHipotecario, int pRenta, int pPrecioTerreno)
{
	_Nombre=pNom;
	aCantidadEstaciones=pCantidadEstaciones;
	aValorHipotecario=pCantidadEstaciones;
	aRenta=pRenta;
	aPrecioTerreno=pPrecioTerreno;
}

Ferrocarril::~Ferrocarril()
{
}

int Ferrocarril::getCantidadEstaciones()
{
	return aCantidadEstaciones;
}

int Ferrocarril::getValorHipotecario()
{
	return aValorHipotecario;
}

int Ferrocarril::getRenta()
{
	return aRenta;
}

int Ferrocarril::getPrecioTerreno()
{
	return aPrecioTerreno;
}

string Ferrocarril::toString()
{
	stringstream s;
	s<<Casilla::toString();
	s<<"Cantidad de estaciones: "<<aCantidadEstaciones<<endl;
	s<<"Valor Hipotecario: "<<aValorHipotecario<<endl;
	s<<"Renta: "<<aRenta<<endl;
	s<<"Precio del terreno: "<<aPrecioTerreno<<endl;
	return s.str();
}
