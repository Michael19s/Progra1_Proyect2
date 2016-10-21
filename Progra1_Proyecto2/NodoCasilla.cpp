#include "NodoCasilla.h"


NodoCasilla::NodoCasilla()
{
	aCasilla = NULL;
	aSiguiente = NULL;
}

NodoCasilla::NodoCasilla(Casilla* pCasilla, NodoCasilla* pSiguiente)
{
	aCasilla = pCasilla;
	aSiguiente = pSiguiente;
}

NodoCasilla::~NodoCasilla(void)
{
}

void NodoCasilla::setCasilla(Casilla* pCasilla)
{
	aCasilla = pCasilla;
}

Casilla* NodoCasilla::getCasilla()
{
	return aCasilla;
}

void NodoCasilla::setSiguiente(NodoCasilla* pSiguiente)
{
	aSiguiente = pSiguiente;
}

