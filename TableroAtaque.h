#ifndef TABLEROATAQUE_H
#define TABLEROATAQUE_H
#include "Movimiento.h"
#include "Tablero.h"

class TableroAtaque : public Tablero
{
	public:
		TableroAtaque();
		~TableroAtaque();
		virtual void imprimir();
		bool ValidarMovimiento(Movimiento);
		void AplicarMovimiento(Movimiento);
		bool VerificarVictoria();
};

#endif