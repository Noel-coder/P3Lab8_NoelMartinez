#include "Juego.h"

Juego::Juego() {
	jugadores=new Jugador*[2];
	tableroBarcos = new TableroBarco*[2];
	tableroAtaque= new TableroAtaque*[2];
	tableroBarcos[0]=new TableroBarco();
	tableroBarcos[1]=new TableroBarco();
	tableroAtaque[0]=new TableroAtaque();
	tableroAtaque[1]=new TableroAtaque();
	for(int i=0; i<10; i++) {
		tableroBarcos[0]->celdas.push_back(vector<char>());
		tableroBarcos[1]->celdas.push_back(vector<char>());
		tableroAtaque[0]->celdas.push_back(vector<char>());
		tableroAtaque[1]->celdas.push_back(vector<char>());
	}
	for(int i=0; i<10; i++) {
		for(int j=0; j<10; j++) {
			tableroBarcos[0]->celdas[i].push_back('-');
			tableroBarcos[1]->celdas[i].push_back('-');
			tableroAtaque[0]->celdas[i].push_back('-');
			tableroAtaque[1]->celdas[i].push_back('-');
		}
	}
}

Juego::~Juego() {
}

void Juego::PrepararJuego() {
	string jugador1,jugador2;
	int opcion=1;
	while(opcion != 3) {
		cout << "Menu" << endl
		     << "1. Jugar vs la maquina(Haaland): " << endl
		     << "2. Jugar vs Humano: " << endl
		     << "3. Salir" << endl;
		cout << "Ingrese una opcion: " << endl;
		cin>>opcion;
		switch(opcion) {
			case 1: {
				//jugar vs Haaland
				
				break;
			}
			case 2: {
				//1vs1
				cout<< "Ingrese el nombre del Jugador 1: "<<endl;
				cin>>jugador1;
				cout<< "Ingrese el nombre del jugador 2: "<<endl;
				cin>>jugador2;
				cout<<"Le toca colocar los barcos a: "<<jugador1<<" "<<endl<<endl;
				jugadores[0] = new JugadorHumano(jugador1);
				jugadores[0]->ColocarBarcos(tableroBarcos[0]);
				cout<<"Ahora toca colocar los barcos a: "<<jugador2<<" "<<endl<<endl;
				jugadores[1] = new JugadorHumano(jugador2);
				jugadores[1]->ColocarBarcos(tableroBarcos[1]);
				break;
			}
			case 3: {
				break;
			}
		}
	}
}

void Juego::Jugar() {

}