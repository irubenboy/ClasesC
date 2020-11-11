#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	/* Condicional */
	char dias;
	cout << "Inserta un caracter para saber que dia es";
	cin >> dias;
	
	if( dias == 'L' || dias == 'l'){
		cout << "Lunes";
	} else if( dias == 'M'){
		cout << "Martes";
	} else if( dias == 'X'){
		cout << "Miércoles";
	} else if( dias == 'J'){
		cout << "Jueves";
	} else if( dias == 'V'){
		cout << "Viernes";
	} else {
		cout << "No has insertado ninguna correcta";
	}
	
	/* SWITCH */
	switch(dias){
	case 'L': case 'l':
		cout << "Lunes";
		break;
	case 'M':
		cout << "Martes";
		break;
	case 'X':
		cout << "Miércoles";
		break;
	case 'J':
		cout << "Jueves";
		break;
	case 'V':
		cout << "Viernes";
		break;
	default: 
		cout << "No has insertado ninguna correcta";
		break;
	}
	
	switch(dias){
	case 'L':  case 'M': case 'X': case 'J': case 'V':
		cout << "No es fin de semana";
		break;
	case 'S': case 'D':
		cout << "Es fin de semana";
		break;
	}
	// LUNES Lunes lunes lUnEs
	return 0;
}

