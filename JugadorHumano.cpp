#include "JugadorHumano.h"

JugadorHumano::JugadorHumano(string _nombre):Jugador(_nombre) {
}

JugadorHumano::~JugadorHumano() {
}

Movimiento JugadorHumano::jugar(TableroAtaque* tableroAtaque) {
	
	return Movimiento(3,4);
}

int JugadorHumano::validacionTamano(int numero,int direccion) {
	while(direccion+numero>10 || direccion < 0) {
		cout << "Esas posiciones no son validas intentelo nuevamente!: " <<endl;
		cin>>direccion;
	}
	return direccion;
}

void JugadorHumano::ColocarBarcos(TableroBarco* tableroBarcos) {
	int posicion;
	cout << "Posicion de sus barcos, Ingrese [1] Horizontalmente o [2] Verticalmente: "<<endl;
	cin>>posicion;
	if(posicion==1) {
		int direccionX,direccionY;
		cout << "Primero ingresamos nuestro (Aircraft Carrier) "<<endl;
		cout << "Ingrese donde desea colocar su Aircraft Carrier en el eje X (Horizontal): "<<endl;
		cin >> direccionX;
		cout << "Ingrese donde desea colocar su Aircraft Carrier en el eje Y (Vertical): "<<endl;
		cin>> direccionY;
		direccionX = validacionTamano(5,direccionX);
		for(int i=direccionX; i < 10; i++) {
			tableroBarcos->celdas[direccionY][i]='A';
		}
		//Segundo Barco
		cout << "Ahora ingresamos nuestro segundo barco el (Battleship) " <<endl;
		cout << "Ingrese donde desea colocar su Aircraft Carrier en el eje X (Horizontal): "<<endl;
		cin >> direccionX;
		cout << "Ingrese donde desea colocar su Aircraft Carrier en el eje Y (Vertical): "<<endl;
		cin>> direccionY;
		direccionX = validacionTamano(4,direccionX);
		for(int i=direccionX; i < 10; i++) {
			tableroBarcos->celdas[direccionY][i]='B';
		}
		//Tercer Barco
		cout << "Ahora vamos con nuestro tercer barco el (Cruiser) "<<endl;
		cout << "Ingrese donde desea colocar su Aircraft Carrier en el eje X (Horizontal): "<<endl;
		cin >> direccionX;
		cout << "Ingrese donde desea colocar su Aircraft Carrier en el eje Y (Vertical): "<<endl;
		cin>> direccionY;
		direccionX = validacionTamano(3,direccionX);
		for(int i=direccionX; i < 10; i++) {
			tableroBarcos->celdas[direccionY][i]='C';
		}
		//Cuarto Barco
		cout << "Continuemos ingresando el cuarto barco el (Submarine) "<<endl;
		cout << "Ingrese donde desea colocar su Aircraft Carrier en el eje X (Horizontal): "<<endl;
		cin >> direccionX;
		cout << "Ingrese donde desea colocar su Aircraft Carrier en el eje Y (Vertical): "<<endl;
		cin>> direccionY;
		direccionX = validacionTamano(3,direccionX);
		for(int i=direccionX; i < 10; i++) {
			tableroBarcos->celdas[direccionY][i]='S';
		}
		//Quinto Barco
		cout << "Por ultimo ingresemos nuestro barco (Destroyer) "<<endl;
		cout << "Ingrese donde desea colocar su Aircraft Carrier en el eje X (Horizontal): "<<endl;
		cin >> direccionX;
		cout << "Ingrese donde desea colocar su Aircraft Carrier en el eje Y (Vertical): "<<endl;
		cin>> direccionY;
		direccionX = validacionTamano(2,direccionX);
		for(int i=direccionX; i < 10; i++) {
			tableroBarcos->celdas[direccionY][i]='D';
		}
		
		
	} else {
		int direccionX,direccionY;
		cout << "Primero ingresamos nuestro (Aircraft Carrier) "<<endl;
		cout << "Ingrese donde desea colocar su Aircraft Carrier en el eje X (Horizontal): "<<endl;
		cin >> direccionX;
		cout << "Ingrese donde desea colocar su Aircraft Carrier en el eje Y (Vertical): "<<endl;
		cin>> direccionY;
		direccionX = validacionTamano(5,direccionX);
		for(int i=direccionX; i < 10; i++) {
			tableroBarcos->celdas[i][direccionX]='A';
		}
		//Segundo Barco
		cout << "Ahora ingresamos nuestro segundo barco el (Battleship) " <<endl;
		cout << "Ingrese donde desea colocar su Aircraft Carrier en el eje X (Horizontal): "<<endl;
		cin >> direccionX;
		cout << "Ingrese donde desea colocar su Aircraft Carrier en el eje Y (Vertical): "<<endl;
		cin>> direccionY;
		direccionX = validacionTamano(4,direccionX);
		for(int i=direccionX; i < 10; i++) {
			tableroBarcos->celdas[i][direccionX]='B';
		}
		//Tercer Barco
		cout << "Ahora vamos con nuestro tercer barco el (Cruiser) "<<endl;
		cout << "Ingrese donde desea colocar su Aircraft Carrier en el eje X (Horizontal): "<<endl;
		cin >> direccionX;
		cout << "Ingrese donde desea colocar su Aircraft Carrier en el eje Y (Vertical): "<<endl;
		cin>> direccionY;
		direccionX = validacionTamano(3,direccionX);
		for(int i=direccionX; i < 10; i++) {
			tableroBarcos->celdas[i][direccionX]='C';
		}
		//Cuarto Barco
		cout << "Continuemos ingresando el cuarto barco el (Submarine) "<<endl;
		cout << "Ingrese donde desea colocar su Aircraft Carrier en el eje X (Horizontal): "<<endl;
		cin >> direccionX;
		cout << "Ingrese donde desea colocar su Aircraft Carrier en el eje Y (Vertical): "<<endl;
		cin>> direccionY;
		direccionX = validacionTamano(3,direccionX);
		for(int i=direccionX; i < 10; i++) {
			tableroBarcos->celdas[i][direccionX]='S';
		}
		//Quinto Barco
		cout << "Por ultimo ingresemos nuestro barco (Destroyer) "<<endl;
		cout << "Ingrese donde desea colocar su Aircraft Carrier en el eje X (Horizontal): "<<endl;
		cin >> direccionX;
		cout << "Ingrese donde desea colocar su Aircraft Carrier en el eje Y (Vertical): "<<endl;
		cin>> direccionY;
		direccionX = validacionTamano(2,direccionX);
		for(int i=direccionX; i < 10; i++) {
			tableroBarcos->celdas[i][direccionX]='D';
		}
	}


}

