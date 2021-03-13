#ifndef JUGADOR_H
#define JUGADOR_H
#include "TableroBarco.h"
#include "TableroAtaque.h"
#include <string>
using namespace std;

class Jugador
{
	protected:
		string nombre;
	public:
		Jugador();
		~Jugador();
		Jugador(string);
		virtual Movimiento jugar(TableroAtaque*)=0;
		virtual void ColocarBarcos(TableroBarco*)=0;
		string getNombre();
		void setNombre(string);
};

#endif