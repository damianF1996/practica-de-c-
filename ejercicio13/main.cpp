#include <iostream>

using namespace std;

int main()
{
    int a,b;
    int sum,cont;
    cont = 0;
    sum = 0;
    cout << "ingrese dos valores" << endl;
    cin >> a >> b;
    while(cont < b)
    {
     cont = cont +1;
     sum = sum + a;
    }
    cout << a << "X"<< b << "=" << sum << endl;
    return 0;
}
