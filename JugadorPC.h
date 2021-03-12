#ifndef JUGADORPC_H
#define JUGADORPC_H

#include "Jugador.h"

class JugadorPC : public Jugador
{
	private:
		
	public:
		JugadorPC();
		~JugadorPC();
		Movimiento jugar(TableroAtaque*);
		void ColocarBarcos(TableroBarco*);
};

#endif