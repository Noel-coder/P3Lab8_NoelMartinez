#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
class Jugador
{
	private:
		string nombre;
	public:
		Jugador();
		~Jugador();
		Movimiento jugar(TableroAtaque*);
		void ColocarBarcos(TableroBarco*);
};

#endif