#include <iostream>
#include <string.h>


using namespace std;

int main()
{

    char name[40],name1[40],name2[40];
    int a,c=1;
    int fecha,fecha1;
    cout << "ingrese su nombre" << endl;
    fflush(stdin);
    gets(name);
    cout << "ingrese su fecha de nacimiento" << endl;
    if ( strcmp("fin", name)!= 0)
    {
        while ( c <= 10)
        {
            cin >> a;
            if (a > fecha || c == 1)
            {
                fecha = a;
                strcpy(name1,name);
            }
            if (a < fecha1|| c == 1)
            {
                fecha1 = a;
                strcpy(name2, name);
            }
            cout << "ingrese su nombre" << endl;
            fflush(stdin);
            gets(name);
            if( strcmp("fin", name)!=0)
                cout << "ingrese su fecha de nacimiento" << endl;
            else
            {
                cout << "a finalizado el programa" << endl;
                cout << "el mayor es " << name2 << " con fecha de nacimiento " <<  fecha1<< endl;
                cout << "el menor es " << name1 << " con fecha de nacimiento " << fecha << endl;
            }
            c++;
        }
    }
    else
        cout << "a finalizado el programa" << endl;
    cout << "el mayor es " << name1 << "con fecha de nacimiento" <<  fecha1<< endl;
    cout << "el menor es " << name2 << "con fecha de nacimiento" << fecha << endl;
    return 0;
}
