#include <iostream>

using namespace std;

int main()
{
    int a,i,n;
    int mayor, menor, cmayor, cmenor;
    cout << "ingrese cantidad de valores a leer" << endl;
    cin >> n ;
   for ( i=1; i <=n ; i++ )
    {
    cout << "ingrese un numero" << endl;
    cin >> a;
    if ( a > mayor || i == 1)
        {
            mayor = a;
            cmayor  = i;
        }
    if  ( a < menor || i == 1 )
        {
            menor = a;
            cmenor = i;
        }
    }
    cout << " el mayor es " << mayor << " y su posicion es " << cmayor << endl;
    cout << " el menor es " << menor << " y su posicion es " << cmenor << endl;
    return 0;
}
