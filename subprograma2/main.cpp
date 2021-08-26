#include <iostream>
#include <conio.h>

using namespace std;

void pedirdatos();
void al_cuadrado(float x);

float a;
int main()
{
    pedirdatos();
    al_cuadrado(a);
    return 0;
}

void pedirdatos()
{
    cout<<"ingrese un valor: ";
    cin>>a;
}
void al_cuadrado(float x)
{
    float cuadrado;
    cuadrado = x * x;
    cout<<"El cuadrado del numero "<< cuadrado<<endl;
}
