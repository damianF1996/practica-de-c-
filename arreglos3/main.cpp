#include <iostream>

using namespace std;

int main()
{
    int numero[] = {1,2,3,4,10};
    int mayor=0, suma=0, igual = 0;
    for(int i=0; i<5; i++)
    {
        if (numero[i] >= mayor)
        {
            mayor = numero[i];
            suma +=numero[i];
            igual = suma - mayor;
        }
    }
    if ( mayor < igual)
        cout <<"no se encontro elemento equivalente a la suma del resto de los elementos" << endl;
    else
        cout<< " el elemento " << mayor << " equivale a la suma del resto de elementos" << endl;
    return 0;
}
