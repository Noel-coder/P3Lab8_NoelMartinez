#ifndef JUEGO_H
#define JUEGO_H
#include "TableroBarcos.h"
#include "TableroAtaque.h"
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