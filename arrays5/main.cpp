#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int vec1[10]= {1,2,3,4,5,6,7,8,9,10};
    int vec2[10]= {2,4,5,10,80,20,8,9,15,30};
    int res[10];
    int tam, sum;
    cout << "ingrese el tamaño de vector ( minino 2, maximo 10)"<< endl;
    cin >>tam;
    for (int i = 0; i < tam; i++)
    {
        res[i] = vec1[i] + vec2[i];
    }
    for(int i = 0; i < tam; i++)
    {
        sum += vec1[i] + vec2[i];
    }
    cout <<"el promendio es " << sum/tam <<endl;
    cout <<"el vector resultado ";
    for(int i = 0;i < tam; i++)
    cout <<res[i]<<" ";
    return 0;
}
