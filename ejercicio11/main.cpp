#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "ingrese un valor"<< endl;
    cin >> a;
    if (a <=12)
    {
        cout << "menor"<< endl;
    }
     else if (a <= 18)
    {
        cout << "cadete"<< endl;
    }
    else
    {
        if (a < 26 )
            cout << "juvelin"<< endl;
        else
            cout << "mayor" << endl;
    }
    cout << "fin del programa"<< endl;

   return 0;
}
