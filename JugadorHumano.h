#ifndef JUGADORHUMANO_H
#define JUGADORHUMANO_H
#include "Jugador.h"
#include "TableroBarco.h"
#include "TableroAtaque.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class JugadorHumano : public Jugador
{
	private:
	public:
		JugadorHumano(string);
		~JugadorHumano();
		int validacionTamano(int,int);
		virtual Movimiento jugar(TableroAtaque*);
		virtual void ColocarBarcos(TableroBarco*);
};

#endif