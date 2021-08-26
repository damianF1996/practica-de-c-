#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct datos
{
    char nombre[25];
    int discapacidad;

}perso[100],personad[100],personass[100];

int main()
{
    int n,a=0,b=0;
    char persona1[25];
    cout << "ingrese la cantidad de personas: ";
    cin>>n;
    for(int i = 0; i < n; i++)
    {
       fflush(stdin);
        cout<<"ingrese su nombre: ";
        cin.getline(perso[i].nombre,25,'\n');
        cout<<"ingrese si tiene una discapacidad 1 si no tiene es 0: ";
        cin>>perso[i].discapacidad;
        cout<<'\n';
            if ( perso[i].discapacidad == 1)
            {
                strcpy(personad[a].nombre,perso[i].nombre);
                a++;
            }
            else
            {
                strcpy(personass[b].nombre,perso[i].nombre);
                b++;
            }
    }
    cout<<"lista de las personas sin discapacidad: "<< endl;
    for(int i = 0; i < n; i++)
    {
        cout<<personass[i].nombre<<endl;
    }
    cout<<'\n';
    cout<<"lista de las personas con discapacidad: "<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<personad[i].nombre<<endl;
    }
    return 0;
}
