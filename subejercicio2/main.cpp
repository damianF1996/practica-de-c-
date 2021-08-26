#include <iostream>

using namespace std;

void modulo__pro(float &x)
{
    if (x < 0)
    {
        x = (-1) * x;
        return;
    }
    else
        return;

}
int main()
{
    float a;
    cout << " ingrese un numero" << endl;
    cin >> a;
    modulo__pro(a);
    cout << "el modulo de " <<" | "<< a <<" | "<< endl;
    return 0;
}
