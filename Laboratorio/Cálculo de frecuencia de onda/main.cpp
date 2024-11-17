#include <iostream>
using namespace std;

int main() {
    float T, f;
    cout << "Ingrese el periodo (T) en segundos: ";
    cin >> T;
    if (T > 0) {
        f = 1 / T;
        cout << "La frecuencia es: " << f << " Hz\n";
    } else {
        cout << "El periodo debe ser mayor a 0.\n";
    }
    return 0;
}
