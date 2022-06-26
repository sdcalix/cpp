#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int nota = 0;
	
	cout << "Ingrese la nota que obtuvo: ";
	cin >> nota;
	
	cout << endl;
	
	if (nota > 100 || nota < 0){
		cout << "Ingrese una nota entre 0 - 100";
		return 0;
	}
	
	if (nota >= 96 && nota <= 100){
		cout << "Obtuvistes una A++";
	}
	
	if (nota >= 91 && nota <= 95){
		cout << "Obtuvistes una A+";
	}
	
	if (nota >= 86 && nota <= 90){
		cout << "Obtuvistes una A";
	}
	
	if (nota >= 81 && nota <= 85){
		cout << "Obtuvistes una A-";
	}
	
	if (nota >= 76 && nota <= 80){
		cout << "Obtuvistes una B+";
	}
	
	if (nota >= 71 && nota <= 75){
		cout << "Obtuvistes una B";
	}
	
	if (nota >= 66 && nota <= 70){
		cout << "Obtuvistes una B-";
	}
	
	if (nota >= 61 && nota <= 65){
		cout << "Obtuvistes una C+";
	}
	
	if (nota >= 56 && nota <= 60){
		cout << "Obtuvistes una C";
	}
	
	if (nota >= 51 && nota <= 55){
		cout << "Obtuvistes una C-";
	}
	
	if (nota >= 46 && nota <= 50){
		cout << "Obtuvistes una D+";
	}
	
	if (nota >= 41 && nota <= 45){
		cout << "Obtuvistes una D";
	}
	
	if (nota >= 36 && nota <= 40){
		cout << "Obtuvistes una D-";
	}
	
	if (nota >= 31 && nota <= 35){
		cout << "Obtuvistes una E+";
	}
	
	if (nota >= 26 && nota <= 30){
		cout << "Obtuvistes una E";
	}
	
	if (nota >= 21 && nota <= 25){
		cout << "Obtuvistes una E-";
	}
	
	if (nota >= 16 && nota <= 20){
		cout << "Obtuvistes una F+";
	}
	
	if (nota >= 6 && nota <= 15){
		cout << "Obtuvistes una F";
	}
	
	if (nota >= 1 && nota <= 5){
		cout << "Obtuvistes una F-";
	}
	
	if (nota == 0 ){
		cout << "Obtuvistes una F--";
	}
	
	return 0;
}
