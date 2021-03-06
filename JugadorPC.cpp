#include "JugadorPC.h"

JugadorPC::JugadorPC(string _nombre):Jugador(_nombre) {
}

JugadorPC::~JugadorPC() {
}

Movimiento JugadorPC::jugar(TableroAtaque* tableroAtaque) {
	return Movimiento(3,4);
}

int JugadorPC::validacionTamano(int numero,int direccion) {
	while(direccion+numero>10 || direccion < 0) {
		cout << "Esas posiciones no son validas intentelo nuevamente!: " <<endl;
		cin>>direccion;
	}
	return direccion;
}

void JugadorPC::ColocarBarcos(TableroBarco* tableroBarcos) {
	int posicionR,direccionX,i,direccionY,contador;
	cout << "Posicion de los barcos para Haaland (Random) "<<endl;
	cout << "Eligiendose las posicion aleatoriamente... "<<endl;
	posicionR=rand()%3;
	cout<<"La posicion random es: "<<posicionR;
	cout<<endl;
	if(posicionR==1) {
		cout << "Primer barco de la PC (Aircraft Carrier) "<<endl;
		cout << "Aircraft Carrier en el eje X (Horizontal): "<<endl;
		direccionX=rand()%5;
		cout<<"Eje X Random: "<<direccionX<<endl;
		cout << "Aircraft Carrier en el eje Y (Vertical): "<<endl;
		direccionY=rand()%5;
		cout<<"Eje Y Random: "<<direccionY<<endl;
		direccionX = validacionTamano(5,direccionX);
		i=direccionX;
		while(direccionX =='A' && direccionY=='A') {
			direccionX=rand()%5;
			direccionY=rand()%5;
		}
		contador=0;
		while(contador<5) {
			tableroBarcos->celdas[direccionY][i]='A';
			i++;
			contador++;
		}
		tableroBarcos->imprimir();
		//Segundo Barco
		cout << "Segundo barco de la PC el (Battleship) " <<endl;
		cout << "Battleship en el eje X (Horizontal): "<<endl;
		direccionX=rand()%6;
		cout<<"Eje X Random: "<<direccionX<<endl;
		cout << "Battleship en el eje Y (Vertical): "<<endl;
		direccionY=rand()%6;
		cout<<"Eje Y Random: "<<direccionY<<endl;
		direccionX = validacionTamano(4,direccionX);
		i=direccionX;
		while(direccionX =='A' && direccionY=='A') {
			direccionX=rand()%6;
			direccionY=rand()%6;
		}
		contador=0;
		while(contador<4) {
			tableroBarcos->celdas[direccionY][i]='B';
			i++;
			contador++;
		}
		tableroBarcos->imprimir();
		//Tercer Barco
		cout << "Ahora vamos con el tercer barco de la PC (Cruiser) "<<endl;
		cout << "Cruiser en el eje X (Horizontal): "<<endl;
		direccionX=1+rand()%4;
		cout<<"Eje X Random: "<<direccionX<<endl;
		cout << "Cruiser en el eje Y (Vertical): "<<endl;
		direccionY=1+rand()%4;
		cout<<"Eje Y Random: "<<direccionY<<endl;
		direccionX = validacionTamano(3,direccionX);
		i=direccionX;
		while(direccionX =='A' && direccionY=='A'|| direccionX =='B' && direccionY=='B') {
			direccionX=rand()%4;
			direccionY=rand()%4;
		}
		contador=0;
		while(contador<3) {
			tableroBarcos->celdas[direccionY][i]='C';
			i++;
			contador++;
		}
		tableroBarcos->imprimir();
		//Cuarto Barco
		cout << "Cuarto barco de la PC el (Submarine) "<<endl;
		cout << "Submarine en el eje X (Horizontal): "<<endl;
		direccionX=1+rand()%4;
		cout<<"Eje X Random: "<<direccionX<<endl;
		cout << "Submarine en el eje Y (Vertical): "<<endl;
		direccionY=1+rand()%4;
		cout<<"Eje Y Random: "<<direccionY<<endl;
		direccionX = validacionTamano(3,direccionX);
		i=direccionX;
		while(direccionX =='A' && direccionY=='A' || direccionX =='B' && direccionY =='B'|| direccionX=='C'&& direccionY=='C') {
			direccionX=rand()%4;
			direccionY=rand()%4;
		}
		contador=0;
		while(contador<3) {
			tableroBarcos->celdas[direccionY][i]='S';
			i++;
			contador++;
		}
		tableroBarcos->imprimir();
		//Quinto Barco
		cout << "Ultimo ingresemos barco de la PC (Destroyer) "<<endl;
		cout << "Destroyer en el eje X (Horizontal): "<<endl;
		direccionX=1+rand()%3;
		cout<<"Eje X Random: "<<direccionX<<endl;
		cout << "Destroyer en el eje Y (Vertical): "<<endl;
		direccionY=1+rand()%3;
		cout<<"Eje Y Random: "<<direccionY<<endl;
		direccionX = validacionTamano(2,direccionX);
		i=direccionX;
		while(direccionX =='A' && direccionY=='A'|| direccionX =='B' && direccionY =='B'|| direccionX=='C'&& direccionY=='C' || direccionX=='S'&&direccionY=='S') {
			direccionX=rand()%3;
			direccionY=rand()%3;
		}
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
		cout << "Primer barco de la PC (Aircraft Carrier) "<<endl;
		cout << "Aircraft Carrier en el eje X (Horizontal): "<<endl;
		direccionX=rand()%5;
		cout<<"Eje X Random: "<<direccionX<<endl;
		cout << "Ingrese donde desea colocar su Aircraft Carrier en el eje Y (Vertical): "<<endl;
		direccionY=rand()%5;
		cout<<"Eje Y Random: "<<direccionY<<endl;
		i=direccionX;
		while(direccionX =='A' || direccionY=='A') {
			direccionX=rand()%5;
			direccionY=rand()%5;
		}
		direccionX = validacionTamano(5,direccionX);
		contador=0;
		while(contador<5) {
			tableroBarcos->celdas[direccionX][direccionY]='A';
			direccionX++;
			contador++;
		}
		tableroBarcos->imprimir();
		//Segundo Barco
		cout << "Segundo barco de la PC el (Battleship) " <<endl;
		cout << "Battleship en el eje X (Horizontal): "<<endl;
		direccionX=rand()%6;
		cout<<"Eje X Random: "<<direccionX<<endl;
		cout << "Battleship en el eje Y (Vertical): "<<endl;
		direccionY=rand()%6;
		cout<<"Eje Y Random: "<<direccionY<<endl;
		while(direccionX =='A' || direccionY=='A') {
			direccionX=rand()%6;
			direccionY=rand()%6;
		}
		direccionX = validacionTamano(4,direccionX);
		contador=0;
		while(contador<4) {
			tableroBarcos->celdas[direccionX][direccionY]='B';
			direccionX++;
			contador++;
		}
		tableroBarcos->imprimir();
		//Tercer Barco
		cout << "Ahora vamos con el tercer barco de la PC (Cruiser) "<<endl;
		cout << "Cruiser en el eje X (Horizontal): "<<endl;
		direccionX=rand()%4;
		cout<<"Eje X Random: "<<direccionX<<endl;
		cout << "Cruiser en el eje Y (Vertical): "<<endl;
		direccionY=rand()%4;
		cout<<"Eje Y Random: "<<direccionY<<endl;
		while(direccionX =='A' || direccionY=='A'|| direccionX =='B' || direccionY=='B') {
			direccionX=rand()%4;
			direccionY=rand()%4;
		}
		direccionX = validacionTamano(3,direccionX);
		contador=0;
		while(contador<3) {
			tableroBarcos->celdas[direccionX][direccionY]='C';
			direccionX++;
			contador++;
		}
		tableroBarcos->imprimir();
		//Cuarto Barco
		cout << "Cuarto barco de la PC el (Submarine) "<<endl;
		cout << "Submarine en el eje X (Horizontal): "<<endl;
		direccionX=rand()%4;
		cout<<"Eje X Random: "<<direccionX<<endl;
		cout << "Submarine en el eje Y (Vertical): "<<endl;
		direccionY=rand()%4;
		cout<<"Eje Y Random: "<<direccionY<<endl;
		while(direccionX =='A' || direccionY=='A' || direccionX =='B' || direccionY =='B'|| direccionX=='C'|| direccionY=='C') {
			direccionX=rand()%4;
			direccionY=rand()%4;
			cout<<"estas sobreescrito";
		}
		direccionX = validacionTamano(3,direccionX);
		contador=0;
		while(contador<3) {
			tableroBarcos->celdas[direccionX][direccionY]='S';
			direccionX++;
			contador++;
		}
		tableroBarcos->imprimir();
		//Quinto Barco
		cout << "Ultimo ingresemos barco de la PC (Destroyer) "<<endl;
		cout << "Destroyer en el eje X (Horizontal): "<<endl;
		direccionX=rand()%2;
		cout<<"Eje X Random: "<<direccionX<<endl;
		cout << "Destroyer en el eje Y (Vertical): "<<endl;
		direccionY=rand()%2;
		cout<<"Eje Y Random: "<<direccionY<<endl;
		while(direccionX =='A' || direccionY=='A'|| direccionX =='B' || direccionY =='B'|| direccionX=='C' || direccionY=='C' || direccionX=='S' || direccionY=='S') {
			direccionX=rand()%3;
			direccionY=rand()%3;
		}
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