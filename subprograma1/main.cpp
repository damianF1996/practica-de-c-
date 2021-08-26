#include <iostream>
#include <conio.h>

using namespace std;

void pedirdatos();
void multi(float x, float y);

float a,b;

int main()
{
    pedirdatos();
    multi(a,b);
    return 0;
}
 void pedirdatos()
{
     cout<<"ingrese el numero: ";
     cin>>a;
     cout<<"ingrese otro numero: ";
     cin>>b;
}

void multi(float x, float y)
{
    float multiplicacion;
    multiplicacion = x * y;
    cout<<"El resultado de la multiplicacion es: "<<multiplicacion<<endl;
}
