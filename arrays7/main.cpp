#include <iostream>
#include <conio.h>
#define VACIO 0
using namespace std;

int contador(int x[], int tami1)
{
    int i=0;
    while((i < tami1) && x[i] !=VACIO)
        i++;
    return i;
}
void apareo(int a[], int tam1, int b[], int tam2, int c[])
{
    int i =0, j=0,k=0;
    while (i < tam1 && j < tam2)
    {
        if ( a[i] < b [j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    for( int cont =i; cont < tam1; cont++)
    {
        c[k]= a[cont];
        k++;
    }
    for( int cont=j; cont< tam2; cont++)
    {
        c[k] =b[cont];
        k++;
    }
    return;
}
int main()
{
    int a[]={1,2,6,50,100};
    int b[]={3,5,7,45,120};
    int c[50];
    apareo(a,contador(a,5),b,contador(b,5),c);
    cout <<"el vector ordenado {";
    for(int  x = 0; x < contador(c,50);x++)
        cout << c[x] << " ";
    cout <<"}"<<endl;
    return 0;
}
