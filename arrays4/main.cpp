#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int vec[]={ 20 ,30 ,10 ,40};
    int aux, pos;
    for(int i = 0; i < 4; i++)
    {
        pos = i;
        aux = vec[i];
        while((pos > 0) && ( vec[pos-1] < aux))
        {
            vec[pos] = vec [pos-1];
            pos--;
        }
        vec[pos]=aux;
    }
    cout <<"vector ordenado "<< endl;
    for (int i = 0; i < 4 ; i++)
        cout<< vec[i]<< endl;
    return 0;
}
