#include <iostream>

using namespace std;

int main()
{
    int a, mayor, i;
    mayor = 0;
    for ( i =1;i <= 10;i ++)
    {
    cout << "ingrese un numero" << endl;
    cin >> a;
    if ( a > mayor)
        mayor = a;
    }
    cout << " el mayor es " << mayor << endl;
    return 0;
}
