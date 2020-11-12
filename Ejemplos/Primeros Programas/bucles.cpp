#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	/* BUCLE -> INICIALIZACIÓN DE UNA VARIABLE, UNA CONDICIÓN, Y UN INCREMENTO/DECREMENTO
		while
		for	
		do-while
	*/
	/* Mostrar los números del 0 al 100 en crecimiento */
	cout << "Del 0 al 100 con FOR" << endl;
	int i;
	for(i = 0; i <= 100; i++){
		cout << i << " ";
	}
	
	cout << endl << "Del 100 al 0 con FOR" << endl;
	int n;
	for(n = 100; n>= 0; n--){ // n = n - 1
		cout << n << " ";
	}
	
	cout << endl << "Del 0 al 100 con FOR de dos en dos" << endl;
	int j;
	for(j = 0; j <= 100; j+=2){ //j = j + 2
		cout << j << " ";
	}
	
	int z = 101; // Inicialización
	cout << endl << "Del 0 al 100 con WHILE" << endl;
	while(z <= 100){ // Condición
		cout << z << " ";
		z++; // Incremento
	}
	
	cout << endl << "Del 0 al 100 con DO-WHILE" << endl;
	int h = 101;
	do{
		cout << h << " ";
		h++;
	} while(h <= 100);
	
	//return 0;
}

