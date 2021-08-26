#include <iostream>
using namespace std;

int main()
{
    int a,cont,sum,sum1,prom,s;
    cout << "ingrese 50 numeros enteros" << endl;
    cont = 0;
    sum = 0;
    s = 0;
    sum1 = 0;
    while (cont < 50)
    {
        cin >> a;
        if ( a > 100)
        {
            sum= sum + a;
            s = s + 1;
        }
        if (a < -10)
        {
            sum1 = sum1 + a;
        }
        cont = cont + 1;
      cout << "ingrese numero" << endl;
    }
    prom = sum / s;
    cout << "promedio de los mayores de 100: "<< prom << endl;
    cout << "suma de los menores de -10:" << sum1 << endl;
    return 0;
}
