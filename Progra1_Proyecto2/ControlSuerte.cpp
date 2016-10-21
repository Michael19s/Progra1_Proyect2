#include "ControlSuerte.h"


ControlSuerte::ControlSuerte(void)
{
	aControlSuerte = new CartaSuerte*[caMAX_TAMANNO];
	for (int i=0; i<caMAX_TAMANNO; i++)
		aControlSuerte[i]=NULL;
}

ControlSuerte::~ControlSuerte(void)
{
}

void ControlSuerte::setCartaXPosicion(int pPosicion, CartaSuerte* pCarta)
{
	aControlSuerte[pPosicion] = pCarta;
}

string ControlSuerte::TomarCarta()
{
	string lvCartaX = " ";
	lvCartaX = aControlSuerte[0]->getCarta();
	MoverCartas();
	return lvCartaX;
}

void ControlSuerte::MoverCartas()
{
	CartaSuerte* lvAuxiliar = NULL;
	for (int j=0; j<caMAX_TAMANNO-1; j++)
	{
		if (j == 0)
		{

			lvAuxiliar = aControlSuerte[j];
			aControlSuerte[j] = aControlSuerte[j+1];
		}
		else 
			aControlSuerte[j] = aControlSuerte[j+1];
	}
	aControlSuerte[caMAX_TAMANNO-1]=lvAuxiliar;
}

string ControlSuerte::toString()
{
	stringstream lvMensaje;
	for (int i=0; i<caMAX_TAMANNO; i++)
		lvMensaje<<aControlSuerte[i]->getCarta()<<"\n";
	return lvMensaje.str();
}
