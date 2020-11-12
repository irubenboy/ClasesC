#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    double salario = 1030.75;
    int salarioEntero = int(salario);
	char salarioChar = char(salario);
	char letra = 'l';
	int letraEntero = int(letra);
	double letraDouble = double(letra);
	enum Colores {
		ROJO, AZUL, AMARILLO
	};
	
	int rojo = int(ROJO);
	Colores c = Colores(1);

    cout << salarioEntero << endl;
	cout << setprecision(4) << salario << endl;
	cout << letraEntero << endl;
	cout << letraDouble << endl;
	cout << salarioChar << endl;
	cout << rojo << endl;
	cout << c << endl;
}

