#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int v[6][5]= {1,5,6,70,50 , 100,120,150,15,60 , 55,62,42,10,12 , 80,40,90,75,2 , 8,16,24,32,40 , 17,20,25,30,35};
    int x[30];
    int k=0;
    int pos, aux;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0 ; j< 5; j++)
        {
            x[k]= v[i][j];
            k++;
        }

    }
    for (int k =0;k < 30;k++)
    {
        pos = k;
        aux = x[k];
        while ((pos > 0 )&& (x[pos-1] < aux))
        {
            x[pos]= x[pos-1];
            pos--;
        }
        x[pos]= aux;
    }
    cout <<" matrix se ordeno en un vector  x ={";
    for(int k = 0; k < 30; k++ )
        cout <<" "<< x[k];
    cout<<"}"<< endl;
    return 0;
}
