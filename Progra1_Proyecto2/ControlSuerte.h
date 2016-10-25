#include <string>
#include <sstream>
#include<time.h>
#include "CartaSuerte.h"

#pragma once
int const caMAX_TAMANNO = 16;
class ControlSuerte
{
private:
	CartaSuerte** aControlSuerte;
public:
	ControlSuerte();
	~ControlSuerte();
	void setCartaXPosicion(int, CartaSuerte*);

	void llenarVector(CartaSuerte *);//Lleva de forma aleatoria sin repetirse
	string toString();
	string TomarCarta();
	void MoverCartas();
};

