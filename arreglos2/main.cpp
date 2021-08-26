#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a[100],b[100],n;
    cout <<" ingrese el numero de elementos " << endl;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cout <<"ingrese los elementos " << endl;
        cin >> a[i];
    }
    for( int i=0;i<n;i++)
        b[i] = a[n-(i+1)];
    cout <<"la posiciones fuero invertidas" << endl;
    for(int i=0;i<n;i++)
    cout << i <<" ---> "<< b[i] << endl;
    return 0;
}
