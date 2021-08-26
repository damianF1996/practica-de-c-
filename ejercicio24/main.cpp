#include <iostream>

using namespace std;

int main()
{
 int lote =1,a,minimo,maximo = -1,pos,maximolote,suma, posmaxi;
 float prom;
 do
 {
    pos= 0;
    suma = 0;
    cout << "" << endl;
    cin >> a;
    minimo = a;
    while (a > 0)
    {
        pos++;
        suma += a;
        if (a > maximo)
        {
            maximo = a;
            posmaxi = pos;
            maximolote = lote;
        }
        if (a < minimo)
            minimo = a;
        cout<<"ingrese valor para sublote" << lote << endl;
        cin >> a;
    }
    if (pos)
    {
        cout<<"el maximo lote "<< lote<< " : " << prom = ( suma / pos )<< endl;
        cout <<"el sublote minimo "<< lote << " : " << minimo << endl;
    }
    else
        cout <<""<< endl;
    lote++;
 }
    while(a>=0)
    if ( maximo != -1)
    {
        cout <<"total de sublote "<< lote -1 << endl;
        cout << "el maximo es " << maximo << ", en el lote " << maximolote << "con posicion" << posmaxi << endl;
    }

}
