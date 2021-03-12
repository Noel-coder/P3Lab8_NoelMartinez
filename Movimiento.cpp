#include "Movimiento.h"

Movimiento::Movimiento()
{
}

Movimiento::~Movimiento()
{
}

Movimiento::Movimiento(int _ataqueFila, int _ataqueColumna){
	this->ataque_fila=_ataqueFila;
	this->ataque_columna=_ataqueColumna;
}

int Movimiento::getAtaqueFila(){
	return this->ataque_fila;
}

void Movimiento::setAtaqueFila(int _ataqueFila){
	this->ataque_fila=_ataqueFila;
}

int Movimiento::getAtaqueColumna(){
	return this->ataque_columna;
}

void Movimiento::setAtaqueColumna(int _ataqueColumna){
	this->ataque_columna=_ataqueColumna;
}
void imprimir(){
	
}