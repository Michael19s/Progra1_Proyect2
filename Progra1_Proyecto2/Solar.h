#pragma once
#include "Casilla.h"

class Solar: public Casilla
{
private:
	int _Renta;
	int _PrecioTerreno;
	int _PrecioConstruccion;
	int _PrecioHipotecario;
	int _CantidadCasas;
	string _Color;
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

