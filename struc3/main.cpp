#include <iostream>
#include <conio.h>

using namespace std;

struct promedio
{
    float nota1;
    float nota;
    float nota2;
};
struct alumno
{
    char nombre[20];
    char sexo[20];
    int edad;
    struct promedio prom;
}alumno1[100];

int main()
{
    float pro1[100], mayor;
    int pos,n;
    cout<<"Cuantos alumnos desea ingresar"<< endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        cout << "ingrese el nombre del alumno:"<< endl;
        cin.getline(alumno1[i].nombre,20,'\n');
        cout << "ingrese su sexo del alumno:" << endl;
        cin.getline(alumno1[i].sexo,20,'\n');
        cout <<"ingrese la edad:"<< endl;
        cin >> alumno1[i].edad;
        cout<<"ingrese su primera nota " <<endl;
        cin>>alumno1[i].prom.nota;
        cout<<"ingrese su segunda nota " << endl;
        cin >>alumno1[i].prom.nota1;
        cout <<"ingrese su tercera nota " << endl;
        cin >>alumno1[i].prom.nota2;
        cout<<'\n';
    }
    for (int i = 0; i < n; i++)
    {
        pro1[i] = (alumno1[i].prom.nota + alumno1[i].prom.nota1 + alumno1[i].prom.nota2)/3;
        if ( mayor < pro1[i])
        {
            mayor =  pro1[i];
            pos= i;
        }
    }


    cout <<'\n';
    cout <<"Datos del alumno con el mayor promedio:"<< endl;
    cout <<"Nombre: "<<alumno1[pos].nombre<< endl;
    cout <<"Sexo: "<<alumno1[pos].sexo<< endl;
    cout <<"Edad: "<<alumno1[pos].edad<< endl;
    cout <<"promedio "<< mayor<< endl;;

    return 0;
}
