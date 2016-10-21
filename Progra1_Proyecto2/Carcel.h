#pragma once
#include "Casilla.h"
#include "Jugador.h"
//#include "Banco.h"
#include <Windows.h>
#include <Time.h>

const int turno=1;
class Carcel: public Casilla
{
public:
	Carcel();
	Carcel(string);
	~Carcel();

	bool cobrar();//LE REBAJA LA MULTA AL JUGADOR Y AUMENTA EL DEL BANCO
	int multa();//REGRESA LA MULTA POR ESTAR EN LA CARCEL
	string getNombre();
	string toString();
};

