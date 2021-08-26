#include <iostream>
#include <conio.h>

using namespace std;

template <class tipod>
void maximo(tipod x, tipod z, tipod y);

int main()
{
    int a = 300, b = 5, c=100;
    maximo(a,b,c);
    return 0;
}
template <class tipod>
void maximo(tipod x, tipod z, tipod y)
{
    if ( x > z && x > y)
        cout<<"el mayor es: "<< x << endl;
    if ( z > x && z > y)
        cout<<"el mayor es: "<< z <<endl;
    if ( y > z && y > x)
        cout<<"el mayor es: "<< y <<endl;
}
