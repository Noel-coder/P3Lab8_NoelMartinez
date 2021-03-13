#ifndef JUGADORPC_H
#define JUGADORPC_H
#include "TableroBarco.h"
#include "TableroAtaque.h"
#include "Jugador.h"

class JugadorPC : public Jugador
{
	public:
		JugadorPC();
		~JugadorPC();
		virtual Movimiento jugar(TableroAtaque*);
		virtual void ColocarBarcos(TableroBarco*);
};

#endif