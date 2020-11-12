#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	/* Sentencia, secuencia y bloque */
	int edad = 3; // sentencia -> un orden
	edad = 4;
	/* bloque -> un agrupación sentencias que se quiere apartar del programa principal */
	{
		cout << "hola";
	}
	
	/* VARIABLES
	
	- globales -> Se pueden usar en todo el programa, y se suele declarar al principio.
	- locales -> Solo se usan en el bloque declarado, nunca fuera.
	*/
	int peso = 5;
	{
		cout << edad;
		int peso = 2;
		cout << peso;
	};
	cout << peso;
	return 0;
}

