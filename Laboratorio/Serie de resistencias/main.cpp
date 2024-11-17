#include <iostream>
using namespace std;

int main() {
    float R1, R2, R_total;
    cout << "Ingrese la primera resistencia (R1): ";
    cin >> R1;
    cout << "Ingrese la segunda resistencia (R2): ";
    cin >> R2;
    R_total = R1 + R2;
    cout << "La resistencia total en serie es: " << R_total << " ohmios\n";
    return 0;
}
