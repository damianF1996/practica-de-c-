#include <iostream>

using namespace std;

int main()
{
 int x, f;
    cout << "Ingrese los valores" << endl;
    cout << "x: ";
    cin >> x;
    cout << "f: ";
    cin >> f;
    if ( x > f )
    {
        cout << x << "es mayor que " << f << endl;
    }
    else
    {
        if ( x == f )
        {
            cout << x << " es igual que " << f << endl;
        }
        else
        {
            cout << f << " es mayor que " << x << endl;
        }

    }
    cout << " fin del programa" <<  endl;
    return 0;
}
