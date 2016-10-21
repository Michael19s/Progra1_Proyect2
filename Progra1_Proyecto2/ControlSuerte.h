#include <string>
#include <sstream>
#include "CartaSuerte.h"

#pragma once
int const caMAX_TAMANNO = 16;
class ControlSuerte
{
private:
	CartaSuerte** aControlSuerte;
public:
	ControlSuerte(void);
	~ControlSuerte(void);
	void setCartaXPosicion(int, CartaSuerte*);
	string toString();
	string TomarCarta();
	void MoverCartas();
};

