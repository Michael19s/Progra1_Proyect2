#include "Dado.h"


Dado::Dado() //crea cada dado con un número aleatorio entre 1 y 6. Cada vez que se llame el atributo tendrá un valor distinto entre ese rango.
{
	srand(time(NULL));
	for(int i = 0; i < tam; i++)
	{
		dado[i] = rand() % 6 + 1;
	}
	ptos = 0;
}

 
 void Dado::gotoxy(int x,int y){  //permite imprimir en coordenadas específicas de la consola
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  


Dado::~Dado(void)
{

}

void Dado::lanzarDados() //metodo que muestra los dados con un número aleatorio entre el rango de 1 a 6. Se utilizaron cout en este caso por motivos de estética, puesto que con el operador stringstream no permite utilizar la función gotoxy
{  
	char caracter = 200;
	char caracter2 = 201;
	char caracter3 = 186;
	char caracter4 = 187;
	char caracter5 = 188;
	char caracter6 = 205;

	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	gotoxy(40,2);cout<<"El puntaje obtenido por los dados es: "<<endl;
	gotoxy(41,3);cout<<endl;
	gotoxy(51,3);cout<<caracter2<<caracter6<<caracter6<<caracter6<<caracter4<<endl;
	gotoxy(51,4);cout<<caracter3<<endl;
	gotoxy(55,4);cout<<caracter3<<endl;
	gotoxy(51,5);cout<<caracter<<caracter6<<caracter6<<caracter6<<caracter5<<endl;
	SetConsoleTextAttribute(hConsole,10);
	gotoxy(53,4);cout<<dado[0]<<endl;

	SetConsoleTextAttribute(hConsole,7);
	gotoxy(60,3);cout<<caracter2<<caracter6<<caracter6<<caracter6<<caracter4<<endl;
	gotoxy(60,4);cout<<caracter3<<endl;
	gotoxy(64,4);cout<<caracter3<<endl;
	gotoxy(60,5);cout<<caracter<<caracter6<<caracter6<<caracter6<<caracter5<<endl;
	SetConsoleTextAttribute(hConsole,10);
	gotoxy(62,4);cout<<dado[1]<<endl;
	SetConsoleTextAttribute(hConsole,7);
	gotoxy(43,7);cout<<"Jugador obtiene un total de: "<<dado[0]+dado[1]<<endl;
    ptos = dado[0]+dado[1];
}

int Dado::obtenerPuntos()
{
	return ptos;
}

void Dado::setPtos(int p)
{
	ptos = p;
}