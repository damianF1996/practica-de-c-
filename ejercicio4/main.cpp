#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Por favor ingrese un valor" << endl;
    cin >> a;
    cout << "La quinta parte del valor es " << a / 5 << endl;
    cout <<  "El resto es " << a % 5 << endl;
    cout << "La septima parte de quinta parte es " << ( a / 5 ) / 7 << endl;
    return 0;
}
