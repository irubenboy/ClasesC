#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num;
	cout << "Introduce un n�mero positivo del 0 al 100\n";
	do{
		cin >> num;
		if(num < 0 || num > 100){
			cout << "Error, vuelva a introducirlo" << endl;
		}
	} while(num < 0 || num > 100);
	
	//cout << num << endl << "N�mero correcto";
	cout << num << endl;
	cout << "N�mero correcto";
	
	return 0;
}

