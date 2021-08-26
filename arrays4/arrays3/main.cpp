#include <iostream>
#include <conio.h>


using namespace std;

int main()
{
    char a[100];
    char c;
    int cont;
    c = getche();
    while ( c != 'c')
        {
            a[cont] = c;
            cont++;
            c = getche();
        }
    cout << " listar la palabra al revez" << endl;
    for ( int i = cont-1; i >= 0; i--)
        cout << a[i] << endl;
    return 0;
}
