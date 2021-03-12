#include "Jugador.h"

Jugador::Jugador()
{
}

Jugador::~Jugador()
{
}

Jugador::Jugador(string _nombre){
	this->nombre=_nombre;
}

string Jugador::getNombre(){
	return this->nombre;
}

void Jugador::setNombre(string _nombre){
	this->nombre=_nombre;
}