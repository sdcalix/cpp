#include <iostream>
#include <conio.h>
#include <windows.h>
#include "registro.h"

using namespace std;

int main(int argc, char** argv) {
	
	system("mode con: cols=80 lines=25");
	system("COLOR 17");
	Beep(1500,700);
	dibujarCuadro(1,1,78,24); //Cuadro grande
	dibujarCuadro(2,2,77,4); //Cuadro del titulo
	gotoxy(24,3); cout << " CENTRO DE VACUNACI0N LAS PALMAS ";
	vacio();
	menu();
	getch();
	
	return 0;
}
