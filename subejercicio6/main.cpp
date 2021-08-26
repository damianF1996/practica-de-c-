#include <iostream>
#include <conio.h>

using namespace std;

float sumar( float x, float y)
{
    return (float) x + y;
}
float resta(float x, float y)
{
    return (float) x - (y);
}
float multi(float x, float y)
{
 return (float) x * y;
}
float divi( float x, float y)
{
    return (float) x / y;
}
void ingrese(float &a, float &b)
{
cout <<"ingrese el valor a " << endl;
cin >> a;
cout << "ingrese el valor b" << endl;
cin >> b;
return;
}
void menu()
{
cout <<" ingrese opcion: " << endl;
cout <<"a- ingrese datos: " << endl;
cout <<"b- sumar: " << endl;
cout <<"c- restar: " << endl;
cout <<"d- multiplicar: " << endl;
cout <<"e- dividir: " << endl;
cout <<"Esc- salir " << endl;
}

int main()
{
    char option;
    option=getch();
    float n1,n2;
    do
    {
        menu();
        option=getch();
        switch (option)
        {
            case 'a':
            case 'A':
                ingrese(n1,n2);
                break;
            case 'b':
            case 'B':
                cout << "la suma es : " << sumar(n1,n2)<< endl;
                break;
            case 'c':
            case 'C':
                cout <<"la resta es : " << resta(n1,n2)<< endl;
                break;
            case 'd':
            case 'D':
                cout <<" la multiplicacion : " << multi(n1,n2)<< endl;
                break;
            case 'e':
            case 'E':
                cout <<" la division es : " << divi(n1,n2) << endl;
                break;
        }

    }
    while ((int)option != 27);
    return 0;
}
