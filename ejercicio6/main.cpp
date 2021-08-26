#include <iostream>

using namespace std;

int main()
{
    int x, f;
    cout << "Ingrese los fechas en el formato AAAAMMDD" << endl;
    cout << "x: ";
    cin >> x;
    cout << "f: ";
    cin >> f;
    if ( x > f )
    {
        cout << x << " es la fecha mas reciente " << endl;
    }
    else
    {
        if (x == f)
        {
            cout << x << " es la misma fecha " << endl;
        }
        else
        {
            cout << f << " es la fecha mas reciente " << endl;
        }
    }
    cout << " fin del programa" <<  endl;
    return 0;
}
