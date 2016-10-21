#pragma once
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>  
#include <windows.h> 
#include<conio.h>
using namespace std;
int const tam = 2;
class Dado
{
private:
	int dado[tam];
    int ptos;
public:
	Dado(void);
	~Dado(void);
	void lanzarDados();
	void gotoxy(int,int);  
	int obtenerPuntos();
	void setPtos(int);
};

