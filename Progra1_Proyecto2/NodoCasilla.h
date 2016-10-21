#include "Casilla.h"

#pragma once
class NodoCasilla
{
private:
	Casilla* aCasilla;
	NodoCasilla* aSiguiente;
public:
	NodoCasilla();
	NodoCasilla(Casilla*, NodoCasilla*);
	~NodoCasilla(void);
	void setCasilla(Casilla*);
	Casilla* getCasilla();
	void setSiguiente(NodoCasilla*);
	NodoCasilla* getSiguiente();
};

