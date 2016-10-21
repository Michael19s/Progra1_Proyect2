#include "CartaSuerte.h"
#include "ControlSuerte.h"
#include "CasillaSuerte.h"
#include "ServicioPublico.h"
#include "Ferrocarril.h"
#include <iostream>
using namespace std;
void main()
{
	CartaSuerte* Carta1 = new CartaSuerte("Multa de transito, pagas $50");
	CartaSuerte* Carta2 = new CartaSuerte("Le robaste al banco, ve a la carcel");
	CartaSuerte* Carta3 = new CartaSuerte("No pagaste los impuestos, retrocede un espacio");
	CartaSuerte* Carta4 = new CartaSuerte("Has sido muy bueno ayudando a los hospitales, recibes $200");
	CartaSuerte* Carta5 = new CartaSuerte("Estas al dia con todos los impuestos, adelantas 2 casillas");
	CartaSuerte* Carta6 = new CartaSuerte("Premio por el mejor empresario, adelanta un espacio y recibes $150");
	CartaSuerte* Carta7 = new CartaSuerte("Premio por ser nombrado alcalde, ve a GO y cobra $200");
	CartaSuerte* Carta8 = new CartaSuerte("Compraste objetos ilegales, debes pagar $100");
	CartaSuerte* Carta9 = new CartaSuerte("Eres una persona emprendedora, recibes $300");
	CartaSuerte* Carta10 = new CartaSuerte("Ve a la CARCEL");
	CartaSuerte* Carta11 = new CartaSuerte("Ve a la casilla GO");
	CartaSuerte* Carta12 = new CartaSuerte("Recibes una herencia de un familiar el cual no sabias que existia, cobras $600");
	CartaSuerte* Carta13 = new CartaSuerte("Te han puesto una multa por no recoger lo que deja tu perro en el parque; pagas $200");
	CartaSuerte* Carta14 = new CartaSuerte("Rompes la Interfaz grafica de Ubuntu, retrocedes 2 casillas");
	CartaSuerte* Carta15 = new CartaSuerte("Inventas un nuevo codigo que hace que Win funcione 0.01% mas rapido, cobras $400");
	CartaSuerte* Carta16 = new CartaSuerte("No aguantas mas el estrés de programar, dejas todo y te vas en crucero 15 días por el caribe, pagas $500");
	ControlSuerte* Control1 = new ControlSuerte();
	Control1->setCartaXPosicion(0,Carta1);
	Control1->setCartaXPosicion(1,Carta2);
	Control1->setCartaXPosicion(2, Carta3);
	Control1->setCartaXPosicion(3, Carta4);
	Control1->setCartaXPosicion(4, Carta5);
	Control1->setCartaXPosicion(5, Carta6);
	Control1->setCartaXPosicion(6, Carta7);
	Control1->setCartaXPosicion(7, Carta8);
	Control1->setCartaXPosicion(8, Carta9);
	Control1->setCartaXPosicion(9, Carta10);
	Control1->setCartaXPosicion(10, Carta11);
	Control1->setCartaXPosicion(11, Carta12);
	Control1->setCartaXPosicion(12, Carta13);
	Control1->setCartaXPosicion(13, Carta14);
	Control1->setCartaXPosicion(14, Carta15);
	Control1->setCartaXPosicion(15, Carta16);
	CasillaSuerte Casilla1 = CasillaSuerte("Casilla 1", Control1);
	cout<<Casilla1.toString()<<"\n";
	system("pause");
	system("cls");
	cout<<Casilla1.toString()<<"\n";
	system("pause");
	system("cls");

	cout<<"Servicios Publicos y Ferrocarril"<<endl;

	Casilla *c=new ServicioPublico("Servicio de Luz A", 200, 250, 150, "Luz");
	cout<<((ServicioPublico*)c)->toString();
	cout<<endl;
	Casilla *c2=new Ferrocarril("Ferrocarril A", 2, 200, 225, 210);
	cout<<((Ferrocarril*)c2)->toString();
	system ("pause");
}
