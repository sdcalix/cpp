#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int ciclos = 0;
	
	while(ciclos < 1000000){
		cout << "*";
		
		ciclos = ciclos + 1;
	}
	
	return 0;
}
