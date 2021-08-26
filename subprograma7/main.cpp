#include <iostream>
#include <conio.h>

using namespace std;

void tiempo(int totalseg, int&,int&,int&);

int main()
{
    int totalseg,horas=0,minutos=0,segundos=0;
    cout<<"ingrese un valor en segundos ";
    cin>>totalseg;
    tiempo(totalseg,horas,minutos,segundos);
    cout<<"El tiempo total es: "<<endl;
    cout<<"Horas: "<<horas<<endl;
    cout<<"Minutos: "<<minutos<<endl;
    cout<<"Segundos: "<<segundos<<endl;

    return 0;
}
void tiempo( int totalseg, int& horas, int& minutos, int& segundos)
{
    minutos = totalseg /60;
    segundos = totalseg % 60;
    horas = minutos / 60;
    minutos = minutos % 60;
}
