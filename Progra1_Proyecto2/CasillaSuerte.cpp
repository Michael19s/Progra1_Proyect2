#include "CasillaSuerte.h"


CasillaSuerte::CasillaSuerte(): Casilla()
{
	_Nombre = "";
	aControlSuerte = NULL;
}

CasillaSuerte::CasillaSuerte(string pNombre, ControlSuerte* pControlSuerte): Casilla(pNombre)
{
	_Nombre = pNombre;
	aControlSuerte = pControlSuerte;
}

CasillaSuerte::~CasillaSuerte(void)
{
}
string CasillaSuerte::getNombre()
{
	return _Nombre;
}

ControlSuerte* CasillaSuerte::getControlSuerte()
{
	return aControlSuerte;
}

string CasillaSuerte::toString()
{
	stringstream lvMensaje;
	lvMensaje<<Casilla::toString();
	lvMensaje<<aControlSuerte->TomarCarta();
	return lvMensaje.str();
}
