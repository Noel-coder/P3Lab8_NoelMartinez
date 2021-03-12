#ifndef MOVIMIENTO_H
#define MOVIMIENTO_H

class Movimiento
{
	private:
		int ataque_fila;
		int ataque_columna;
	public:
		Movimiento();
		~Movimiento();
		void imprimir();
};

#endif