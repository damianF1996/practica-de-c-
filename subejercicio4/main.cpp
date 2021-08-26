#include <iostream>

using namespace std;

void mayor(int &x, int &y)
{
    if (x < y)
       {
           y;
           return;
       }
    else if (x > y)
    {
        x;
        return;
    }

}
int main()
    {
        int a,b;
        cout << "ingrese  numero" << endl;
        cin >> a;
        cout << "ingrese  numero" << endl;
        cin>> b;
        mayor(a,b);
        cout << " el mayor es " << a,b << endl;
        return 0;

    }
