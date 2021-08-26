#include <iostream>
#include <cstring>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void leerdatos(char tabla[][4][50],int fila)
{
    cout <<"ingrese su nombre y apellido" << endl;
    fflush(stdin);
    gets(tabla[fila][0]);
    cout <<"ingrese su direccion" << endl;
    fflush(stdin);
    gets(tabla[fila][1]);
    cout <<"ingrese su numero de telefono" << endl;
    cin >>tabla[fila][2];
    cout <<"ingrese su codigo postal" << endl;
    cin >>tabla[fila][3];
}

 void ordenar(char tabla[][4][50], int tam)
{
    char aux[50];
    for(int i = 0; i < tam - 1; i++)
    {
        for (int j = 0; j < tam - 1 - i; j++)
        {
            if (atoi(tabla[j+1][3]) < atoi(tabla[j][3]))
            {
                for ( int columna = 0; columna < 2 ; columna++)
                {
                    strcpy(aux, tabla[j][columna]);
                    strcpy(tabla[j][columna], tabla[j+1][columna]);
                    strcpy(tabla[j+1][columna], aux);
                }

            }
        }
    }
    cout << "|  Apellido y nombre     | Direccion     |  Telefono   |   Cod. Postal " << endl;
    for (int i=0;i<tam;i++)
    {
        cout << tabla[i][0] << "   |   " << tabla[i][1] << "   |   " ;
        cout << tabla[i][2] << "   |   " <<tabla[i][3] << endl;
    }

}
int main()
{
    char tabla[50][4][50];
    leerdatos(tabla,0);
    leerdatos(tabla,1);
    leerdatos(tabla,2);
    ordenar(tabla,3);
    return 0;
}
