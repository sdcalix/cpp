#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int a = 0;
	int b = 0;
	int resultado = 0;
	int resultado1 = 0;
	int resultado2 = 0;
	int resultado3 = 0;
	
	cout << "Ingrese el valor de a: ";
	cin >> a;
	
	cout << endl;
	
	cout << "Ingrese el valor de b: ";
	cin >> b;
	
	resultado = a + b;
	resultado1 = a - b;
	resultado2 = a * b;
	resultado3 = a / b;
	
	cout << endl;
	cout << "La suma de a + b es: " << resultado;
	cout << endl;
	cout << "La resta de a - b es: " << resultado1;
	cout << endl;
	cout << "La multiplicacion de a * b: " <<resultado2;
	cout << endl;
	cout << "La division de a / b: " << resultado3;
	
	return 0;
}
