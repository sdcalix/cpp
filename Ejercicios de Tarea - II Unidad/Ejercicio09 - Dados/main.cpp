#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int dado1 = 0, dado2 = 0, continuar = 1;

int main(int argc, char const *argv[])
{
    while (continuar == 1)
    {
        cout << "BIENVENIDO" << endl;
        cout << endl;

        srand (time(NULL));

        dado1 = rand() % 6 + 1;
        dado2 = rand() % 6 + 1;

        cout << "dado 1: " << dado1 << endl;
        cout << "dado 2: " << dado2 << endl;
        cout << endl;

        cout << "Desea lanzar los dados otra vez?" << endl;
        cout << "1) Volver a lanzar los dados" << endl;
        cout << "0) Salir del juego" << endl;
        cout << "Opcion---->: ";
        cin >> continuar;

        system("cls");

    }

    cout << "Saliste del juego";

    return 0;
}
