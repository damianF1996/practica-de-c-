#include <iostream>

using namespace std;

int main()
{
    int a,b;
    b = 0;
    cout << "ingrese un valor" << endl;
    cin >> a;
    while (a)
    {
        if (a > 0 )
        {
            b++;
            cout << "la cantidad de valores ingresados es " << b << endl;
        }
        else
        {
            cout << "el valor ingresado es negativo" << endl;

        }
        cout << "ingrese un valor" << endl;
        cin >> a;
    }
    if (a == 0)
    {
        cout << "no se ingresaron valores" << endl;
    }
    return 0;
}
