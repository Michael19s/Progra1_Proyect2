#pragma once
#include<iostream>
#include <sstream>

using namespace std;
class Casilla
{
protected:
	string _Nombre;
public:
	Casilla(string);
	Casilla();

	virtual string toString();
	virtual string getNombre();
	~Casilla();
};
