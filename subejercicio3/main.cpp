#include <iostream>

using namespace std;

int factorial(long n)
{
    if (n < 0)
        return 0;
    else if( n > 1)
        return n = n*factorial(n-1);
        return 1;
}
int main()
{
    long a;
    cout << "ingrese el numero" << endl;
    cin >> a;
    a = factorial(a);
    cout <<" el factorial es " << a << endl;
    return 0;
}
