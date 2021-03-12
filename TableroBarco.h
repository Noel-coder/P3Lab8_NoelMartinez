#ifndef TABLEROBARCO_H
#define TABLEROBARCO_H
#include "Movimiento.h"
#include "Tablero.h"

class TableroBarco : public Tablero
{
	private:
		
	public:
		TableroBarco();
		~TableroBarco();
		void imprimir();
		bool AtaqueExitoso(Movimiento);
};

#endif