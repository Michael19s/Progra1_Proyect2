#include "ServicioPublico.h"


ServicioPublico::ServicioPublico(): Casilla()
{
	aNombre=" ";
	aRenta=0;
	aPrecioTerreno=0;
	aValorHipotecario=0;
	aTipo=" ";
}


ServicioPublico::~ServicioPublico()
{

}

ServicioPublico::ServicioPublico(string pNombre,int pRenta,int pPrecioTerreno,int pValorHipotecario, string pTipo): Casilla(pNombre){
	aRenta=pRenta;
	aPrecioTerreno=pPrecioTerreno;
	aValorHipotecario=pValorHipotecario;
	aTipo=pTipo;
}

string ServicioPublico::getNombre(){
	return aNombre;
}

int ServicioPublico::getRenta(){
	return aRenta;
}

int ServicioPublico::getPrecioTerreno(){
	return aPrecioTerreno;
}

int ServicioPublico::getValorHipotecario(){
	return aValorHipotecario;
}

string ServicioPublico::getTipo(){
	return aTipo;
}

string ServicioPublico::toString(){
	stringstream s;
	s<<Casilla::toString();
	s<<"Renta: "<<aRenta<<endl;
	s<<"Precio del Terreno: "<<aPrecioTerreno<<endl;
	s<<"Valor hipotecario: "<<aValorHipotecario<<endl;
	s<<"Tipo de servicio: "<<aTipo<<endl;
	return s.str();
}