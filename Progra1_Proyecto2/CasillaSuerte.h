#include "ControlSuerte.h"
#include "Casilla.h"

#pragma once
class CasillaSuerte: public Casilla
{
private:
	ControlSuerte* aControlSuerte;
public:
	CasillaSuerte(void);
	CasillaSuerte(string, ControlSuerte*);
	~CasillaSuerte(void);
	string getNombre();
	ControlSuerte* getControlSuerte();
	string toString();
};

