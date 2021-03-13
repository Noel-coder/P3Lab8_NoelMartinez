#include <iostream>
#include "JugadorPC.h"
#include "JugadorHumano.h"
#include "Juego.h"
using namespace std;

int main() {
	Juego* iniciar= new Juego();
	int opcion=1;
	while(opcion==1) {
		iniciar->PrepararJuego();
		iniciar->Jugar();
		cout<<"Deseas jugar de nuevo?" << endl;
		cin>>opcion;
	}
	delete iniciar;
	return 0;
}