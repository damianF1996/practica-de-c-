#include <iostream>
#include <conio.h>
using namespace std;

float modulo(float x)
{
    if (x < 0)
        return (-1) * x;
    else
        return x;

}
int main()
{
    int a;
    cout << " ingrese un numero" << endl;
    cin >> a;
    a = modulo(a);
    cout << "el modulo de " <<" | "<< a <<" | "<< endl;
    return 0;
}



