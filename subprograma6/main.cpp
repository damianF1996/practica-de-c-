#include <iostream>
#include <conio.h>

using namespace std;

void cambio(int a, int& uno, int& cinco, int& diez ,int& veinte, int& cincuenta, int& cien);

int main()
{
    int a, uno = 0, cinco = 0, diez = 0, veinte = 0, cincuenta = 0, cien = 0;
    cout<<"Ingrese un valor: ";
    cin>>a;
    cambio(a,uno,cinco,diez,veinte,cincuenta,cien);
    cout << "Billetes de 100 " <<cien<< endl;
    cout <<"Billetes de 50 "<<cincuenta<<endl;
    cout <<"Billetes de 20 "<<veinte<<endl;
    cout <<"Billetes de 10 "<<diez<<endl;
    cout <<"Billetes de 5 "<<cinco<<endl;
    cout <<"Billetes de 1 "<<uno<<endl;
    return 0;
}

void cambio(int a, int& uno, int& cinco, int& diez, int& veinte, int& cincuenta, int& cien)
{
    int k;
    cien = a / 100;
    a %= 100;
    cincuenta = a / 50;
    a %= 50;
    veinte = a / 20;
    a %= 20;
    diez = a / 10;
    a %= 10;
    cinco = a / 5;
    a %= 5;
    uno = a / 1;
}
