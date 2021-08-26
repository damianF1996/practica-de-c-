#include <iostream>
#include <conio.h>

using namespace std;

int ordenamiento(int vec[])
{
    int pos, aux;
    for(int i = 0; i < 5; i++)
    {
        pos = i;
        aux = vec[i];
        while ((pos > 0)&&(vec[pos-1] < aux))
        {
            vec[pos] = vec[pos-1];
            pos--;
        }
        vec[pos] = aux;
    }
    return 1;
}
int main()
{
    int vec[] ={10,50,80,9,60};
    ordenamiento(vec);
    cout <<"el vector ordenando"<< endl;
    for(int i=0; i < 5; i++)
    cout <<" " << vec[i];
    return 0;
}

