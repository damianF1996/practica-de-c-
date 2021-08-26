#include <iostream>
#include <conio.h>

using namespace std;

void pedirdatos();
float fraccion(float x);

float a;
int main()
{
    pedirdatos();
    cout<<"El numero fraccionario es "<<fraccion(a)<<endl;
    return 0;
}

void pedirdatos()
{
    cout<<"ingrese el numero: ";
    cin>>a;
}
float fraccion(float x)
{
    int fracc = x;
   float frac = x - fracc;
   return frac;
}
