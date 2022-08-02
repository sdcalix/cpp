#include <iostream>
#include <stdlib.h> /* srand, rand */
#include <time.h> /* time */

using namespace std;

int main(int argc, char const *argv[])
{
    int a[5][5];

    srand (time(NULL));

    int alAzar = 0;
    int suma = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            alAzar = rand () % 10 + 1;
            a[i][j] = alAzar;
            suma += a[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << a[i][j] << ", ";
        }
    }

    cout << endl << endl;
    cout << "Total Suma: " << suma;
    
    return 0;
}









