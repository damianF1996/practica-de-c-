#include <iostream>

using namespace std;
int main ()
{
    float C , F ;
    cout << "ingrese un temperatura en °C " << endl;
    cin >> C;
    F = ( C * 9/5 ) + 32;
    cout << " la temperatura es "  << F << "°F" << endl;
    return 0;
}
