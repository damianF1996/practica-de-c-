#include <iostream>
#include <conio.h>

using namespace std;

struct atleta
{
    char nombre[20];
    char pais[20];
    int numero_medallas;
}n[100];
int main()
{
    int a,mayor,pos;
    cout<<"ingrese la cantidad: ";
    cin >>a;
    for(int i = 0; i < a; i++)
    {
        fflush(stdin);
        cout<<i+1<<"-Ingrese nombre: ";
        cin.getline(n[i].nombre,20,'\n');
        cout<<i+1<<"-Ingrese pais: ";
        cin.getline(n[i].pais,20,'\n');
        cout<<i+1<<"-ingrese medallas: ";
        cin>>n[i].numero_medallas;
        cout<<'\n';

    }
    for(int i = 0; i < a; i++)
    {
        if (mayor <n[i].numero_medallas)
        {
            mayor =n[i].numero_medallas;
            pos = i;
        }
    }
    cout<<"El atleta con mayor numero de medallas "<<endl;
    cout<<"Nombre: "<<n[pos].nombre<<endl;
    cout<<"Del pais: "<<n[pos].pais<<endl;

    return 0;
}
