#include <iostream>
#include <conio.h>
#include <math.h>


using namespace std;

float cuadra(float a, float b, float c)
{
    float x1,c2;
    c2 = sqrt(( b * b ) - (4 * a * c));
    if((( b * b ) - (4 * a * c)) > 0)
    {
        x1 = ((-b + c2) / ( 2 * a));
        return x1;
    }
    else
        x1 = 0;
        return x1;

}
float cuadra1(float a, float b, float c)
{
    float x2 ,c3;
    c3 = sqrt(( b * b ) - (4 * a * c));
    if ((( b * b ) - (4 * a * c)) > 0 )
    {
        x2 = (( - b - c3) / (2 * a));
        return x2;
    }
    else
        x2 = 0;
        return x2;
}
int main()
{
    float a1,b1,c1,X1,X2;
    cout << "ingrese el coeficiente a" << endl;
    cin >> a1;
    cout <<"ingrese el coeficiente b" << endl;
    cin >> b1;
    cout << "ingrese el coeficiente c" << endl;
    cin >> c1;
    X1 = cuadra(a1,b1,c1);
    X2 = cuadra1(a1,b1,c1);
    if (X1 !=0 && X2 !=0)
        cout << " las raices x1 = " << X1 << " x2 = " << X2 << endl;
    else
        cout << "No tiene raices reales" << endl;
    return 0;
}
