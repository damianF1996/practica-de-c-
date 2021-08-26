#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

 struct alumno
 {
     char nombre[20];
     int edad;
     float promedio;
 }a1[3];
int main()
{
    int mayor,pos;
    for(int i = 0; i < 3; i++)
    {
        fflush(stdin);
        cout<<"Digite su nombre: ";
        cin.getline(a1[i].nombre,20,'\n');
        cout<<"Digite su edad: ";
        cin >>a1[i].edad;
        cout<<"Cual es su promedio: ";
        cin>>a1[i].promedio;
    }
    for(int i = 0; i < 2; i++)
    {

        if(mayor < a1[i].promedio )
        {
            mayor = a1[i].promedio;
            pos = i;
        }

    }
    cout<<"El que tiene el mayor promedio es"<<endl;
    cout<<"Nombre: "<<a1[pos].nombre<< endl;
    cout<<"Edad: " <<a1[pos].edad<<endl;
    cout<<"Promedio: "<<a1[pos].promedio<<endl;

    return 0;
}
