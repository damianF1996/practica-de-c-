#include <iostream>

using namespace std;

int main()
{
    int a,b,m;
    cout <<"ingrese un valor" << endl;
    cin >> a;
    b = 1;m = 0;
    while (m < a)
    {
        if (b%3==0 && b%5!=0)
        {
            cout << "listado de multiplos de 3 y que no sea multiplos de 5 " << b << endl;
            m++;
        }
        b++;
    }

    return 0;
}
