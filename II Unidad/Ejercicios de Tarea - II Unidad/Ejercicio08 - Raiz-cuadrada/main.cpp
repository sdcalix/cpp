#include <iostream>
#include <math.h>

using namespace std;

float Raiz(float num1)
{
    return sqrt(num1);
}

int main(int argc, char const *argv[])
{
    float numero = 0;
    cout << "Ingrese un numero para saber su raiz: ";
    cin >> numero;

    cout << "La raiz de " << numero << " es: " << Raiz(numero);

    return 0;
}
