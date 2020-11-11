#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	/* SALIDAS */
	/* cout -> comando para mostrar por pantalla */
	cout << "Hola Mundo !!" << endl;
	int num = 20;
	cout << num;
	int euros = 30;
	cout << "Tengo tantos " << euros << endl;
	// Buffer -> memoria temporal (caché)
	/* ENTRADAS */
	int edad;
	cout << "Insertame tu edad \n";
	cin >> edad;
	cout << edad;
	int min, max;
	cout << "\nInsertar minimo y maximo\n";
	cin >> min >> max;
	cout << min << " " << max;
	/* Formateada*/
	double decimal = 12.9456788;
	cout << endl << setprecision(2) << decimal << endl; // Redondear
	cout << setw(5) << "Hola mundo" << endl;
	cout << "Hola mundo" << endl;
	cout << hex << 27 << endl;
	cout << oct << 27 << endl;
	cout << dec << 27 << endl;
	bool x = true;
	cout << boolalpha << x << endl;
	cout << (x ? "SI" : "No") << endl;
	return 0;
}

