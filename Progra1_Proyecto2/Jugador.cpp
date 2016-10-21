#include "Jugador.h"


Jugador::Jugador(string nom, string f, int c)
{
    aNombre = nom;
    aFicha = f;
    aCapital = c;
}


Jugador::~Jugador(void)
{

}

string Jugador::getNombre()
{
	return aNombre;
}

string Jugador::getFicha()
{
	return aFicha;
}

int Jugador::getCapital()
{
	return aCapital;
}

/*Casilla* getListaCasilla();*/

void Jugador::setNombre(string n)
{
	aNombre = n;
}

void Jugador::setFicha(string ficha)
{
	aFicha = ficha;
}

void Jugador::setCapital(int harina)
{
	aCapital = harina;
}

string Jugador::toStringJugador() //Muestra el nombre y el capital de cada jugador por pantalla
{
	stringstream x;
	x<<"Información del jugador: "<<endl;
	x<<endl;
	x<<"Nombre: "<<aNombre<<endl;
	x<<"Capital actual: "<<aCapital<<endl;
	return x.str();
}