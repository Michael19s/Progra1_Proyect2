#include "ListaCasillaJugador.h"


ListaCasillaJugador::ListaCasillaJugador(void)
{
	aNodoCasilla = NULL;
	aContador = 0;
}


ListaCasillaJugador::~ListaCasillaJugador(void)
{
}

bool ListaCasillaJugador::ListaVacia()
{
	bool lvValorRetorno = false;
	if(aContador = 0)
		return true;
}

bool ListaCasillaJugador::CompararCasilla(Casilla* pCasilla, NodoCasilla* pNodoCasilla)
{
	bool lvValorRetorno = false;
	Casilla* lvCasilla = NULL;
	if (pNodoCasilla != NULL)
	{
		lvCasilla = pNodoCasilla -> getCasilla();
		if (pCasilla->getNombre() == lvCasilla->getNombre())
			lvValorRetorno = true;
	}
	return lvValorRetorno;
}

void ListaCasillaJugador::AgregarCasilla(Casilla* pCasilla)
{
	bool lvValorIngresado = false; 
	if (ListaVacia() == true)
	{
		aNodoCasilla = new NodoCasilla(pCasilla, NULL);
		aContador++;
	}
	else
	{
		NodoCasilla* lvActual = aNodoCasilla;
		NodoCasilla* lvAuxiliar;
		while (lvActual ->getSiguiente() != NULL)
			lvActual = lvActual -> getSiguiente();
		lvAuxiliar = new NodoCasilla(pCasilla, NULL);
		lvActual -> setSiguiente(lvAuxiliar);
		aContador++;
	}
}

void ListaCasillaJugador::EliminarCasilla(Casilla* pCasilla)
{
	bool lvValorRetorno = false;
	if(ListaVacia() == false)
	{
		if(aContador == 1)
		{
			if (CompararCasilla(pCasilla, aNodoCasilla) == true)
			{
				delete (aNodoCasilla);
				aNodoCasilla = NULL;
			}
		}
		else
		{
			NodoCasilla* lvAnterior = aNodoCasilla;
			NodoCasilla* lvActual = aNodoCasilla -> getSiguiente();
			while (lvActual != NULL)
			{
				if (CompararCasilla(pCasilla, lvActual) == true)
				{
					lvAnterior -> setSiguiente(lvActual -> getSiguiente());
					delete (lvActual);
					lvActual = NULL;
					lvValorRetorno = true;
				}
				else
				{
					lvAnterior = lvActual;
					lvActual = lvAnterior -> getSiguiente();
				}
			}
		}
	}
}