#include <iostream>
#include "JugadorPC.h"
#include "JugadorHumano.h"
#include "Juego.h"
using namespace std;

int main() {
	Juego* iniciar= new Juego();
	iniciar->PrepararJuego();

	return 0;
}