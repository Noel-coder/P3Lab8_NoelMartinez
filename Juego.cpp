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
	cout << "Menu" << endl
	     << "1. Jugar vs la maquina(Haaland): " << endl
	     << "2. Jugar vs Humano: " << endl;
	cout << "Ingrese una opcion: " << endl;
	cin>>opcion;
	switch(opcion) {
		case 1: {
			//jugar vs Haaland
			cout<< "Ingrese el nombre del jugardor Desafiante: "<<endl;
			cin>>jugador1;
			cout<< "Nombre de la Maquina: Haaland"<<endl;
			cout<<"Le toca colocar los barcos a: "<<jugador1<<" "<<endl;
			jugadores[0] = new JugadorHumano(jugador1);
			jugadores[0]->ColocarBarcos(tableroBarcos[0]);
			tableroBarcos[0]->imprimir();
			cout<<"Ahora toca colocar los barcos a: "<<"Haaland"<<" "<<endl;
			jugadores[1]=new JugadorPC();
			jugadores[1]->ColocarBarcos(tableroBarcos[1]);
			tableroBarcos[1]->imprimir();
			break;
		}
		case 2: {
			//1vs1
			cout<< "Ingrese el nombre del Jugador 1: "<<endl;
			cin>>jugador1;
			cout<< "Ingrese el nombre del jugador 2: "<<endl;
			cin>>jugador2;
			cout<<"Le toca colocar los barcos a: "<<jugador1<<" "<<endl;
			jugadores[0] = new JugadorHumano(jugador1);
			jugadores[0]->ColocarBarcos(tableroBarcos[0]);
			tableroBarcos[0]->imprimir();
			cout<<"Ahora toca colocar los barcos a: "<<jugador2<<" "<<endl;
			jugadores[1] = new JugadorHumano(jugador2);
			jugadores[1]->ColocarBarcos(tableroBarcos[1]);
			tableroBarcos[1]->imprimir();
			break;
		}
	}
}

void Juego::Jugar() {
	int xJugador1,yJugador2,coordenadaX,coordenadaY;
	bool LePego;
	Movimiento movimientoJ1;
	Movimiento movimientoJ2;
	while(xJugador1 != 17 && yJugador2 != 17) {
		//Movimientos Jugador 1
		cout<<jugadores[0]->getNombre()<<" Ingrese la coordenada X a atacar: "<<endl;
		cin>>coordenadaX;
		cout<<jugadores[0]->getNombre()<<" Ingrese la coordenada Y a atacar: "<<endl;
		cin>>coordenadaY;
		movimientoJ1.setAtaqueFila(coordenadaX);
		movimientoJ1.setAtaqueColumna(coordenadaY);
		LePego=tableroBarcos[0]->AtaqueExitoso(movimientoJ1);
		if(LePego){
			cout<<"Le has pegado al barco enemigo!"<<endl;
			xJugador1++;
		}else{
			cout<<"Fallaste! F in the chat"<<endl;
		}
		tableroBarcos[0]->imprimir();
		//Movimientos Jugador 2
		cout<<jugadores[1]->getNombre()<<" Ingrese la coordenada X a atacar: "<<endl;
		cin>>coordenadaX;
		cout<<jugadores[1]->getNombre()<<" Ingrese la coordenada Y a atacar: "<<endl;
		cin>>coordenadaY;
		movimientoJ2.setAtaqueFila(coordenadaX);
		movimientoJ2.setAtaqueColumna(coordenadaY);
		LePego = tableroBarcos[1]->AtaqueExitoso(movimientoJ2);
		if(LePego){
			cout<<"Le has pegado al barco enemigo!"<<endl;
			yJugador2++;
		}else{
			cout<<"Fallaste! F in the chat"<<endl;
		}
		tableroBarcos[1]->imprimir();
	}
	if(xJugador1==17){
		cout<<jugadores[0]->getNombre()<<"Es el Ganador, Felicidades Bestia Parda!"<<endl;
	}else{
		cout<<jugadores[1]->getNombre()<<"Es el Ganador, Felicidades Bestia Parda!"<<endl;
	}
}