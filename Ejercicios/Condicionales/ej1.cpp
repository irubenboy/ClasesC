#include <iostream>
using namespace std;

/*
	La calificación final de un estudiante es la media ponderada de tres notas:
		- La primera nota es un 30% del total
		- La segunda nota es un 60% del total
		- La tercera nota es un 10% del total
	Escribe un programa que lea de la entranda estandar las tres notas de un alumno y calcule su nota final, monstrando cada nota en individual.

	Alumno ->
			-> nota 1 = 6 -> 6 * 0.3 = 1.8
			-> nota 2 = 10 -> 10 * 0.6 = 6
			-> nota 3 = 5 -> 5 * 0.1 = 0.5
			-> nota final = 1.8 +6 +0.5 = 8.3
*/
int main(int argc, char *argv[]) {
	// declaracion de variables
	double nota1, nota2, nota3, nota_final;
	const double PRIMERO = 0.3;
	const double SEGUNDO = 0.6;
	const double TERCERO = 0.1;
	
	// pido valores
	cout << "Ingrese la primera nota:\n";
	cin >> nota1;
	cout << "Ingrese la segunda nota:\n";
	cin >> nota2;
	cout << "Ingresa la tercera nota:\n";
	cin >> nota3;
	
	if(nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10 && nota3 >= 0 && nota3 <= 10){
		// Las operaciones
		nota1 *= PRIMERO; //1.8
		nota2 *= SEGUNDO;
		nota3 *= TERCERO;
		cout << "Nota 1 es " << nota1 << endl;
		cout << "Nota 2 es " << nota2 << endl;
		cout << "Nota 3 es " << nota3 << endl;
		nota_final = nota1 + nota2 + nota3;
		cout << nota_final;
	} else {
		cout << "Error no has indicado bien las notas";
	}
	return 0;
}

