#include <iostream>
#include <conio.h>

using namespace std;

void cal_ano(int,int&,int&,int&);

int main()
{
    int a,anos,mes,dias;
    cout<<" Ingrese cantidad de dias: ";
    cin>>a;
    cal_ano(a,anos,mes,dias);
    cout<<"El años es: "<<anos<<endl;
    cout<<"El mes es: "<<mes<<endl;
    cout<<"El dia es: "<<dias<<endl;
    return 0;
}

void cal_ano(int a, int& anos, int& mes, int& dias)
{
    anos = (a / 365) + 2000;
    a %= 365;
    mes = (a / 30) + 1;
    dias = (a % 30) + 1;
}
