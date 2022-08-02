#include <iostream>
#include "archivos.h"

using namespace std;

void productos(int opcion)
{
    system("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
    {
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "1 - Capuccino" << endl;
        cout << "2 - Expresso" << endl;
        cout << "3 - Cafe Moka" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Capuccino - L 40.00", 1, 40);
            break;
        case 2:
            agregarProducto("1 Expresso - L 30.00", 1, 30);
            break;
        case 3:
            agregarProducto("1 Cafe Moka - L 50.00", 1, 50);
            break;
        default:
            {
                cout << "Opcion no valida" << endl;
                system("pause");
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");

        break;
    }

    case 2:
    {
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*****************" << endl;
        cout << "1 - Latte Frio" << endl;
        cout << "2 - Granita de Cafe" << endl;
        cout << "3 - Smoothie" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Latte Frio - L 55.00", 1, 55);
            break;
        case 2:
            agregarProducto("1 Granita de Cafe - L 40.00", 1, 40);
            break;
        case 3:
            agregarProducto("1 Smoothie - L 40.00", 1, 40);
            break;
        default:
            {
                cout << "Opcion no valida" << endl;
                system("pause");
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");

        break;
    }

    case 3:
    {
        cout << "REPOSTERIA" << endl;
        cout << "*****************" << endl;
        cout << "1 - Alfajores" << endl;
        cout << "2 - Croissant" << endl;
        cout << "3 - Empanada de Pollo" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Alfajores - L 22.00", 1, 22);
            break;
        case 2:
            agregarProducto("1 Croissant - L 25.00", 1, 25);
            break;
        case 3:
            agregarProducto("1 Empanada de Pollo - L 20.00", 1, 20);
            break;
        default:
            {
                cout << "Opcion no valida" << endl;
                system("pause");
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        
        break;
    }

    default:
        {
            cout << "Opcion no valida" << endl;
            system("pause");
            break;
        }

    }

}