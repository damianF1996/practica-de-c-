#include <iostream>
#include <conio.h>

using namespace std;

void pedirdatos();
void funpot(int x,int y);

int a,b;
int main()
{
    cout<<"Para elevar el un numero debera ingresar base y potencia"<<endl;
    pedirdatos();
    funpot(a,b);
    return 0;
}

void pedirdatos()
{
    cout<<"ingrese un base: ";
    cin>>a;
    cout<<"ingrese la potencia:";
    cin>>b;
}
void funpot(int x,int y)
{
    long cuadrado = 1;
    for(int i = 1; i <=y;i++)
    {
        cuadrado *= x;
    }
    cout<<"El cuadrado del numero "<< cuadrado<<endl;
}
