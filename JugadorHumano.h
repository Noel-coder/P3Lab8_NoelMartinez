#ifndef JUGADORHUMANO_H
#define JUGADORHUMANO_H

#include "Jugador.h"

class JugadorHumano : public Jugador
{
	private:
	public:
		JugadorHumano();
		~JugadorHumano();
		Movimiento jugar(TableroAtaque*);
		void ColocarBarcos(TableroBarco*);
};

#endif