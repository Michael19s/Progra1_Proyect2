#pragma once
#include "Dado.h" //lo incluyo para no tener que agregar todas las librerias de nuevo
class Jugador
{
private: 
	string aNombre;
	string aFicha;
	int aCapital;
	/*Casilla* ListaCasilla*/ //no era de propiedades?
public:
	Jugador(string,string,int);
	~Jugador();
	string getNombre();
	string getFicha();
	int getCapital();
	/*Casilla* getListaCasilla();*/
	void setNombre(string);
	void setFicha(string);
	void setCapital(int);
	/*void setListaCasilla(Casilla*);*/
	string toStringJugador();
};

