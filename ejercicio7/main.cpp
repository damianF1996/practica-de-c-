#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "Ingrese los valores" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    if (( a + b) > c )
    {
        cout <<" es triangulo" << endl;
    }
    else
    {
        if (( a + b )== c)
        {
            cout << " es triangulo" << endl;
        }
        else
        {
            cout << " no es triangulo " << endl;
        }
    }
    cout << " fin del programa" <<  endl;
    return 0;
}
