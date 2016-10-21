#include "CartaSuerte.h"


CartaSuerte::CartaSuerte(string pCarta)
{
	aCarta = pCarta;
}


CartaSuerte::~CartaSuerte(void)
{
}

void CartaSuerte::setCarta(string pCarta)
{
	aCarta = pCarta;
}

string CartaSuerte::getCarta()
{
	return aCarta;
}
