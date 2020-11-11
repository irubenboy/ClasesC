#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	/* ESTRUCTURA IF -> CONDICIONAL 
		- IF (condicion)
		- IF (Condicion) else 
		- IF (Condicion) else if (condicion) else if (Condicion) ... else
	*/
	
	/* Inserte un número e indique si es par o impar */
	int num;
	cout << "Inserta un número\n";
	cin >> num;
	//cout << (num % 2 == 0 ? "Es par" : "No es par") << endl;
	if(num % 2 == 0){
		cout << "Es par\n";
	} else {
		cout << "Es impar\n";
	}
	
	/* Usuario debe de insertar una edad y mostrar si le deja entrar en un distoqueta */
	int edad;
	cout << "Inserte su edad\n";
	cin >> edad;
	
	if(edad >= 0){
		if(edad >= 18){
			cout << "Eres mayor de edad, puedes entrar \n";
		} else {
			cout << "Eres menor de edad, no puedes entrar \n";
		}
	} else {
		cout << "No has insertado una edad correcta";
	}
	
	/* Usuario vamos a mostrarle su nota en palabras */
	int nota;
	cout << "Inserte su nota\n";
	cin >> nota;
	
	if(nota < 5 ){
		cout << "Estás suspenso";
	} else if( nota == 5 && nota < 6){
		cout << "Tienes un suficiente";
	} else if( nota == 6 && nota < 7){
		cout << "Tienes un bien";
	} else if( nota >= 7 && nota < 9){
		cout << "Tiene un notable";
	} else if( nota >= 9 && nota <= 10){
		cout << "Tienes un sobresaliente";
	} else if ( nota < 0 && nota > 10){
		cout << "Error de nota";
	}
	
	
	
	return 0;
}

