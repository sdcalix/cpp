#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	double subtotal = 0;
	double total = 0;
	double impouesto = 0.15;
	
	cout << "Ingrese el subtotal de la factura: ";
	cin >> subtotal;
	
	total = subtotal + (subtotal * 0.15);

	cout << endl;
	cout << "Total a pagar es: " << total;
	
	return 0;
}
