#include <iostream>

using namespace std;

int main()
{
    int a[15];
    int maxi,mini,sum,prom;
    cout << "ingrese valores" << endl;
    for (int i = 0; i < 15; i++)
    {
        cout << "a[" << i << "]= ";
        cin>>a[i];
    }
    for (int i = 0; i < 15; i++)
    {
        if (a[i] > maxi )
            maxi = a[i];
        if (a[i] <  mini)
            mini = a[i];
        sum = a[i] + sum;
        prom = sum / 15;
    }
    cout <<" el maximo es " << maxi<< endl;
    cout <<" el minino es " <<  mini << endl;
    cout <<" el promedio es " << prom  << endl;
    return 0;
}
