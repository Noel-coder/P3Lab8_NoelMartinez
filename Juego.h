#ifndef JUEGO_H
#define JUEGO_H
#include "TableroBarco.h"
#include "TableroAtaque.h"
#include "JugadorHumano.h"
#include "JugadorPC.h"
#include "Jugador.h"

class Juego
{
	private:
		TableroBarco** tableroBarcos;
		TableroAtaque** tableroAtaque;
		Jugador** jugadores;
	public:
		Juego();
		~Juego();
		void PrepararJuego();
		void Jugar();
};

#endif