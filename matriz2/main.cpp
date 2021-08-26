#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
   int a[100][100], b[100][100], filas, columnas;
   cout << "ingrese filas" << endl;
   cin >> filas;
   cout << "ingrese columnas" << endl;
   cin >> columnas;
    for(int i=0;i<filas;i++)
    {
        for (int j=0;j<columnas; j++)
        {
            srand(time(NULL));
            a[i][j] = 1 + rand()%(10);
        }
    }
    for (int i=0;i<filas;i++)
    {
        for(int j=0;j<columnas;j++)
        {
            b[i][j] = a[i][j];
        cout << b[i][j];
        }
        cout <<"\n";
    }


    return 0;
}
