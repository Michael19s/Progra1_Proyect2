#pragma once
#include "Casilla.h"

class Ferrocarril: public Casilla
{
private:
	int aCantidadEstaciones;
	int aValorHipotecario;
	int aRenta;
	int aPrecioTerreno;
public:
	Ferrocarril();
	Ferrocarril(string, int, int, int, int);
	~Ferrocarril();
	int getCantidadEstaciones();
	int getValorHipotecario();
	int getRenta();
	int getPrecioTerreno();
	string toString();
};