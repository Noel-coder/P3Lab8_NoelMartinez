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
		Movimiento(int,int);
		void imprimir();
		int getAtaqueFila();
		int getAtaqueColumna();
		void setAtaqueFila(int);
		void setAtaqueColumna(int);
		
};
#endif