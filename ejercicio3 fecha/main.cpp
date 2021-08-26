#include <iostream>

using namespace std;

int main()
{
    int fecha, aaaa, mm, dd;
    cout << " Ingrese fecha "<< endl;
    cin >> fecha;
    aaaa = fecha / 10000;
    mm = (fecha % 10000) / 100;
    dd = fecha % 100;
    cout << "La fecha que ingreso es :" << dd << "/" << mm << "/" << aaaa << endl;
    return 0;
}
