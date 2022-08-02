#include <iostream>
#include "archivos.h"

using namespace std;

double subtotal = 0;
double impuesto = 0.15;
double total = 0;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    impuesto = subtotal * 0.15;
    total = subtotal + (subtotal * 0.15);
}

void imprimirFactura()
{
    system("cls");
    cout << "*******" << endl;
    cout << "FACTURA" << endl;
    cout << "*******" << endl;
    cout << endl;

    cout << "Productos:" << endl;
    cout << listaProductos;

    cout << endl;
    cout << "Subtotal: " << subtotal << endl;
    cout << "Impuesto: " << impuesto << endl;
    cout << "Monto Total: " << total;
    cout << endl;
    cout << endl;
    system("pause");
}