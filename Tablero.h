#ifndef TABLERO_H
#define TABLERO_H
#include <vector>
using namespace std;
class JugadorHumano;
class JugadorPC;
class Juego;

class Tablero {
		friend class JugadorHumano;
		friend class JugadorPC;
		friend class Juego;
	protected:
		vector<vector<char>>celdas;
	public:
		Tablero();
		~Tablero();
		virtual void imprimir()=0;
};

#endif