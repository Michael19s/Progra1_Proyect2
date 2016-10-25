#include "NodoCasilla.h"

#pragma once
class ListaCasillaJugador
{
private:
	NodoCasilla* aNodoCasilla;
	int aContador;
public:
	ListaCasillaJugador(void);
	~ListaCasillaJugador(void);
	bool ListaVacia();
	bool CompararCasilla(Casilla*, NodoCasilla*);
	void AgregarCasilla(Casilla*);
	void EliminarCasilla(Casilla*);
};

