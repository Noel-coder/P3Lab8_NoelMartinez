#ifndef TABLERO_H
#define TABLERO_H
#include <vector>

class Tablero
{
	private:
		vector<vector<char>>celdas;
	public:
		Tablero();
		~Tablero();
		void imprimir()=0;
};

#endif