#pragma once
#include "Casilla.h"

class ServicioPublico: public Casilla
{
private:
	int aRenta;
	int aPrecioTerreno;
	int aValorHipotecario;
	string aTipo;

public:
	ServicioPublico();
	ServicioPublico(string, int, int,int, string);
	~ServicioPublico();
	string getNombre();
	int getRenta();
	int getPrecioTerreno();
	int getValorHipotecario();
	string getTipo();
	string toString();
};

