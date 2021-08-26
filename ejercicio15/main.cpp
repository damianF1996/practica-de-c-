#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
   int i, tipo;
   char motivo[400];
   float valor, sumg, suml, summ;
   char gravedad;
   int cf =0;
   suml = 0;
   summ = 0;
   sumg = 0;
   for (i=1;i<=4;i++)
   {
       cout << "Datos de infraccion N°" << i << endl;
       cout << "ingrese tipo de infraccion"<< endl;
       cin >> tipo;
       while (tipo < 1 || tipo > 4)
       {
           cout << " invalido, vuelva a ingresar" << endl;
           cin >> tipo;
       }
        cout << "ingrese el motivo de la infraccion"<< endl;
        fflush(stdin);
        gets(motivo);
        cout << "ingrese el valor de la multa" << endl;
        cin >> valor;
        cout <<"ingrese gravedad de la infraccion"<< endl;
        cin >> gravedad;
        while (gravedad !='L' && gravedad !='M' && gravedad !='G')
        {
            cout << "invalido, vuelva a ingresar" << endl;
            cin >> gravedad;
        }
        switch (gravedad)
        {
            case 'L':
            {
                suml = suml + valor;
                break;
            }
            case 'G':
            {
                sumg = sumg + valor;
                break;
            }
            case 'M':
            {
                summ = summ + valor;
                break;
            }
        }
        if ((tipo == 3 || tipo == 4 ) && ( gravedad == 'G' ))
         {
             cf++;
         }
    }

   cout << "Valor de multa L $ " << suml << endl;
   cout << "Valor de multa M $ " << summ << endl;
   cout << "Valor de multa G $ " << sumg << endl;
   if (cf > 3)
    {
        cout << "Clausurar la fabrica" << endl;
    }
    return 0;
}
