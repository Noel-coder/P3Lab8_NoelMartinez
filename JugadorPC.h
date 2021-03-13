#ifndef JUGADORPC_H
#define JUGADORPC_H
#include "TableroBarco.h"
#include "TableroAtaque.h"
#include "Jugador.h"
#include "ctime"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class JugadorPC : public Jugador
{
	public:
		JugadorPC();
		~JugadorPC();
		int validacionTamano(int,int);
		virtual Movimiento jugar(TableroAtaque*);
		virtual void ColocarBarcos(TableroBarco*);
};

#endif