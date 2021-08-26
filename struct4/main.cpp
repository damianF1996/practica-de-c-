#include <iostream>
#include <conio.h>

using namespace std;

struct etapas
{
    int horas;
    int minutos;
    int segundos;
}tiempo[100];

int main()
{
    int n,horast,minut,segunt;
    cout << "Ingrese cantidad de etapas " << endl;
    cin>>n;
        for (int i = 0; i < n; i ++)
        {
            cout<<"ingrese las horas: ";
            cin >>tiempo[i].horas;
            cout<<"ingrese las minutos: ";
            cin>>tiempo[i].minutos;
            cout<<"ingrese los segundos: ";
            cin>>tiempo[i].segundos;
            cout<<'\n';
            horast = horast + tiempo[i].horas;
            minut = minut + tiempo[i].minutos;
            if( minut >= 60)
            {
                minut -= 60;
                horast++;
            }
            segunt = segunt + tiempo[i].segundos;
             if( segunt>= 60)
            {
                segunt -= 60;
                minut++;
            }
        }
    cout<<'\n';
    cout<<"total de tiempo empleado " <<'\n'<< endl;
    cout<<"total de horas: "<<horast<<endl;
    cout<<"total de minutos: "<<minut<<endl;
    cout<<"total de segundos: "<<segunt<<endl;
    return 0;
}
