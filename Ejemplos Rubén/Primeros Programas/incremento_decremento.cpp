#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int edad = 10;
	
	// Incremento
	edad = edad + 1;
	cout << edad << endl; //11
	edad += 5;
	cout << edad << endl; //16
	edad++;
	cout << edad << endl; //17
	++edad;
	cout << edad << endl; //18
	cout << ++edad << endl; //19
	cout << (++edad +2) << endl; //21 19+2 = 21 edad = 20
	cout << edad << endl; //20
	
	// Decremento 
	cout << --edad;
	
	edad -= 5; // edad = edad -5
	edad = edad * 5;
	edad *= 5;
	edad = edad / 5;
	edad /= 5;
	cout << (edad - 5);
	
	return 0;
}

