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
		int direccionX,i,direccionY,contador;
		cout << "Primero ingresamos nuestro (Aircraft Carrier) "<<endl;
		cout << "Ingrese donde desea colocar su Aircraft Carrier en el eje X (Horizontal): "<<endl;
		cin >> direccionX;
		cout << "Ingrese donde desea colocar su Aircraft Carrier en el eje Y (Vertical): "<<endl;
		cin>> direccionY;
		direccionX = validacionTamano(5,direccionX);
		i=direccionX;
		contador=0;		
		while(contador<5) {
			tableroBarcos->celdas[direccionY][i]='A';
			i++;
			contador++;
		}
		tableroBarcos->imprimir();
		//Segundo Barco
		cout << "Ahora ingresamos nuestro segundo barco el (Battleship) " <<endl;
		cout << "Ingrese donde desea colocar su Battleship en el eje X (Horizontal): "<<endl;
		cin >> direccionX;
		cout << "Ingrese donde desea colocar su Battleship en el eje Y (Vertical): "<<endl;
		cin>> direccionY;
		direccionX = validacionTamano(4,direccionX);
		i=direccionX;
		contador=0;		
		while(contador<4) {
			tableroBarcos->celdas[direccionY][i]='B';
			i++;
			contador++;
		}
		tableroBarcos->imprimir();
		//Tercer Barco
		cout << "Ahora vamos con nuestro tercer barco el (Cruiser) "<<endl;
		cout << "Ingrese donde desea colocar su Cruiser en el eje X (Horizontal): "<<endl;
		cin >> direccionX;
		cout << "Ingrese donde desea colocar su Cruiser en el eje Y (Vertical): "<<endl;
		cin>> direccionY;
		direccionX = validacionTamano(3,direccionX);
		i=direccionX;
		contador=0;		
		while(contador<3) {
			tableroBarcos->celdas[direccionY][i]='C';
			i++;
			contador++;
		}
		tableroBarcos->imprimir();
		//Cuarto Barco
		cout << "Continuemos ingresando el cuarto barco el (Submarine) "<<endl;
		cout << "Ingrese donde desea colocar su Submarine en el eje X (Horizontal): "<<endl;
		cin >> direccionX;
		cout << "Ingrese donde desea colocar su Submarine en el eje Y (Vertical): "<<endl;
		cin>> direccionY;
		direccionX = validacionTamano(3,direccionX);
		i=direccionX;
		contador=0;		
		while(contador<3) {
			tableroBarcos->celdas[direccionY][i]='S';
			i++;
			contador++;
		}
		tableroBarcos->imprimir();
		//Quinto Barco
		cout << "Por ultimo ingresemos nuestro barco (Destroyer) "<<endl;
		cout << "Ingrese donde desea colocar su Destroyer en el eje X (Horizontal): "<<endl;
		cin >> direccionX;
		cout << "Ingrese donde desea colocar su Destroyer en el eje Y (Vertical): "<<endl;
		cin>> direccionY;
		direccionX = validacionTamano(2,direccionX);
		i=direccionX;
		contador=0;		
		while(contador<2) {
			tableroBarcos->celdas[direccionY][i]='D';
			i++;
			contador++;
		}
		tableroBarcos->imprimir();
	
	} else {
		//verticalmente
		int direccionX,direccionY,i,contador;
		cout << "Primero ingresamos nuestro (Aircraft Carrier) "<<endl;
		cout << "Ingrese donde desea colocar su Aircraft Carrier en el eje X (Horizontal): "<<endl;
		cin >> direccionX;
		cout << "Ingrese donde desea colocar su Aircraft Carrier en el eje Y (Vertical): "<<endl;
		cin>> direccionY;
		direccionX = validacionTamano(5,direccionX);
		i=direccionX;
		contador=0;
		while(contador<5) {
			tableroBarcos->celdas[direccionX][direccionY]='A';
			cout<<"Impresion de i:"<<i<<" "<<"Impresion de direccion X:"<<direccionX<<endl;
			direccionX++;
			contador++;
		}
		tableroBarcos->imprimir();
		//Segundo Barco
		cout << "Ahora ingresamos nuestro segundo barco el (Battleship) " <<endl;
		cout << "Ingrese donde desea colocar su Battleship en el eje X (Horizontal): "<<endl;
		cin >> direccionX;
		cout << "Ingrese donde desea colocar su Battleship en el eje Y (Vertical): "<<endl;
		cin>> direccionY;
		direccionX = validacionTamano(4,direccionX);
		contador=0;
		while(contador<4){
			cout<<"Impresion de i:"<<i<<" "<<"Impresion de direccion X:"<<direccionX<<endl;
			tableroBarcos->celdas[direccionX][direccionY]='B';
			direccionX++;
			contador++;                       
		}
		tableroBarcos->imprimir();
		//Tercer Barco
		cout << "Ahora vamos con nuestro tercer barco el (Cruiser) "<<endl;
		cout << "Ingrese donde desea colocar su Cruiser en el eje X (Horizontal): "<<endl;
		cin >> direccionX;
		cout << "Ingrese donde desea colocar su Cruiser en el eje Y (Vertical): "<<endl;
		cin>> direccionY;
		direccionX = validacionTamano(3,direccionX);
		contador=0;
		while(contador<3) {
			tableroBarcos->celdas[direccionX][direccionY]='C';
			direccionX++;
			contador++;
		}
		tableroBarcos->imprimir();
		//Cuarto Barco
		cout << "Continuemos ingresando el cuarto barco el (Submarine) "<<endl;
		cout << "Ingrese donde desea colocar su Submarine en el eje X (Horizontal): "<<endl;
		cin >> direccionX;
		cout << "Ingrese donde desea colocar su Submarine en el eje Y (Vertical): "<<endl;
		cin>> direccionY;
		direccionX = validacionTamano(3,direccionX);
		contador=0;
		while(contador<3) {
			tableroBarcos->celdas[direccionX][direccionY]='S';
			direccionX++;
			contador++;
		}
		tableroBarcos->imprimir();
		//Quinto Barco
		cout << "Por ultimo ingresemos nuestro barco (Destroyer) "<<endl;
		cout << "Ingrese donde desea colocar su Destroyer en el eje X (Horizontal): "<<endl;
		cin >> direccionX;
		cout << "Ingrese donde desea colocar su Destroyer en el eje Y (Vertical): "<<endl;
		cin>> direccionY;
		direccionX = validacionTamano(2,direccionX);
		contador=0;
		while(contador<2) {
			tableroBarcos->celdas[direccionX][direccionY]='D';
			direccionX++;
			contador++;
		}
		tableroBarcos->imprimir();
	}


}

