#include "TableroBarco.h"

TableroBarco::TableroBarco():Tablero()
{
}

TableroBarco::~TableroBarco()
{
}


void TableroBarco::imprimir(){
	for(int i=0; i < 10; i++){
		for(int j=0; j < 10;j++){
			cout << "[ "<<celdas[i][j]<<" ]";
		}
		cout<<endl;
	}
	cout<<endl;
}

bool TableroBarco::AtaqueExitoso(Movimiento m){
	if(celdas[m.getAtaqueFila()][m.getAtaqueColumna()]=='A'|| celdas[m.getAtaqueFila()][m.getAtaqueColumna()]=='B' 
	|| celdas[m.getAtaqueFila()][m.getAtaqueColumna()]=='C'|| celdas[m.getAtaqueFila()][m.getAtaqueColumna()]=='S'
    || celdas[m.getAtaqueFila()][m.getAtaqueColumna()]=='D'){
		celdas[m.getAtaqueFila()][m.getAtaqueColumna()]='X';	
		return true;
	}else{
		celdas[m.getAtaqueFila()][m.getAtaqueColumna()]='O';	
		return false;
	}
}