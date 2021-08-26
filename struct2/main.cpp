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
}alumno1;
float promedio( float a, float b, float c)
{
    float prome;
    prome = (a + b + c)/3;
}
int main()
{
    float pro1;
    cout << "ingrese el nombre del alumno:"<< endl;
    cin.getline(alumno1.nombre,20,'\n');
    cout << "ingrese su sexo del alumno:" << endl;
    cin.getline(alumno1.sexo,20,'\n');
    cout <<"ingrese la edad:"<< endl;
    cin >> alumno1.edad;
    cout<<"ingrese su primera nota " <<endl;
    cin>>alumno1.prom.nota;
    cout<<"ingrese su segunda nota " << endl;
    cin >>alumno1.prom.nota1;
    cout <<"ingrese su tercera nota " << endl;
    cin >>alumno1.prom.nota2;
    pro1 = promedio(alumno1.prom.nota, alumno1.prom.nota1 ,alumno1.prom.nota2);
    cout <<'\n';
    cout <<"Datos del alumno"<< endl;
    cout <<"Nombre: "<<alumno1.nombre<< endl;
    cout <<"Sexo: "<<alumno1.sexo<< endl;
    cout <<"Edad: "<<alumno1.edad<< endl;
    cout <<"Promedio de alumno "<< pro1<< endl;;

    return 0;
}
