#include <iostream>

using namespace std;

int main()
{
    int listar[10];
    int a;
    cout << "ingrese valores" << endl;
    for (int i = 0; i < 10; i++)
    {   cin>>a;
        listar[i] = a;
    }
    for (int i = 9; i >=0; i--)
    cout << " lista inversa " <<  listar[i] << endl;
    return 0;
}
