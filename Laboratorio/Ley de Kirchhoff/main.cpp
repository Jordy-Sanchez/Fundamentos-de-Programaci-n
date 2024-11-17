#include <iostream>
using namespace std;

int main() {
    float I1, I2, I3;
    cout << "Ingrese la corriente I1: ";
    cin >> I1;
    cout << "Ingrese la corriente I2: ";
    cin >> I2;
    cout << "Ingrese la corriente I3: ";
    cin >> I3;
    if (I1 == I2 + I3) {
        cout << "La ley de Kirchhoff se cumple.\n";
    } else {
        cout << "La ley de Kirchhoff no se cumple.\n";
    }
    return 0;
}
