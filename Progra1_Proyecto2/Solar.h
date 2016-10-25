#pragma once
#include "Casilla.h"

class Solar: public Casilla
{
private:
	int aRenta;
	int aPrecioTerreno;
	int aPrecioConstruccion;
	int aPrecioHipotecario;
	int aCantidadCasas;
	string aColor;
public:
	Solar();
	Solar(string,int,int,int,int,int,string);
	~Solar();

	string getNombre();
	int getRenta();
	int getPrecioTerreno();
	int getPrecioConstruccion();
	int getPrecioHipotecario();
	int getCantidadCasa();
	string getColor();
	string toString();
};

