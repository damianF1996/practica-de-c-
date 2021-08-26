#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numero[] = {2,3,4,5,6};
    int multi = 1;
    for(int i=0;i<5;i++)
    {
        multi *=  numero[i];
    }
    cout <<" la multiplicacion de los elementos del vector es : " << multi << endl;
    getch();
    return 0;
}
