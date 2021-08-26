#include <iostream>

using namespace std;

int main()
{
    int aaaa, mm, dd, fecha;
    cout << " Ingrese año " << endl;
    cin >> aaaa;
    cout << " Ingrese mes " << endl;
    cin >> mm;
    cout << " Ingrese dia " << endl;
    cin >> dd;
    fecha = dd + mm * 100 + aaaa * 10000;
    cout << "La fecha que ingreso es " << endl <<  fecha  << endl << "No se encontraron datos " << endl;
    return 0;
}
