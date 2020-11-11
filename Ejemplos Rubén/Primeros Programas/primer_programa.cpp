#include <iostream> /* Importar librerias */
using namespace std; /* Usar espacio de nombre*/

/* Función main donde comienza la ejecución de nuestro programa */
int main() {
	/*Hola
	esto es un comentario 
	larogb¡ */
	
	// Esto es uno de línea
	/*
	DEFINICIÓN Y DECLARACIÓN
	Definición -> Defino la variable pero no le asigno valor.
	---Creo variable suma.
	Declaración -> Defino la variable y le asigno valor
	--- Creo variable suma = 0;
	*/
	
	/* TIPOS
		- Enteros -> Positivos, negativos y cero sin decimales -> int = 4 bytes,  short -> 2 bytes long -> 8 bytes 
		- Decimales -> con decimales -> float = 4 bytes, double = 8 bytes
		- Caracteres -> caracteres -> char -> 1 byte 'H', 'l'
		. booleano -> verdadero o falso -> true o false bool
	*/
	
	/* ENUM -> Conjunto de datos invariables 
	enum Dias{
		LUNES, MARTES, MIERCOLES, JUEVES, VIERNES
	}
	
	cout << Dias.LUNES
	*/
	/*
	const int PI;
	PI = 3.14;
	int area = PI * radio;
	PI = 2;
	int num1 = 1;
	int num2 = 2;
	int suma = num1 + num2;
	int a;
	*/
	/* OPERACIONES MATEMATICAS
		suma, resta, multi, division
		modulo => resto de una division (12 % 2
		12/2 = 6;
		12%2 = 0;
		-3; // operador negativo
	
		OPERACIONES DE COMPARACIÓN
		3 > 2 -> ME DEVUELVE UN VALOR BOOLEANO -> true
		2 > 3 -> false
		3 >= 3 -> true 3 <= 2 -> true
		3 != 3 -> false 3 != 2 -> true
		3 = 3 -> NO COMPARO ASÍ
		3 == 3 -> true 
	
		OPERADORES LÓGICOS
	
		3 > 2 &&(AND) 4 < 5 -> true && true -> true 
		3 > 2 &&(AND) 4 >5 -> true && false -> false
		3 > 2 ||(OR) 4 > 5 -> true || false -> true 
	
		CONDICINAL -> CONDICION ? Valor cuando sea true : Cuando sea false
		variable > 0 ? "Es positivo" : "Es negativo";
	*/
	cout << "Hola mundo!!"; //  Imprime por pantala "Hola Mundo"
	return 0;
}

