#include <iostream>

using namespace std;

int main()
{
  float a;
  int b,c,d,e;
  cout << "ingrese el sueldo del empleado" << endl;
  cin >> a;
  b = 0; c = 0; d = 0; e = 0;
  if (a < 0)
  {
      cout << "valor incorrecto" << endl;
      cout << "ingrese de nuevo " << endl;
      cin >> a;
  }
  if (!a)
  {
      cout << "fin de programa" << endl;
  }
  while (a > 0)
  {
      if ( a < 1520)
      {
          b++;
      }
      else if ( a <= 2780)
      {
          c++;
      }
      else
      {
        if ( a <= 5999)
           {
            d++;
           }
        else
          {
           e++;
          }
      }
      cout << "ingrese el sueldo del empleado o finalize con cero" << endl;
      cin >> a;
  }
  cout << "Cantidad de sueldos menores a $1520 es " << b << endl;
  cout << "Cantidad de sueldos entre $1520 a $2780 es " << c << endl;
  cout << "Cantidad de sueldos entre $2780 a $5999 es " << d << endl;
  cout << "Cantidad de sueldos superiores a $5999 es " << e << endl;
    return 0;
}
