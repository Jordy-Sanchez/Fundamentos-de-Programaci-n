#include <iostream>
using namespace std;

int main() {
    float R;
    cout << "Ingrese la resistencia (R): ";
    cin >> R;
    if (R == 0) {
        cout << "¡Cortocircuito detectado!\n";
    } else {
        cout << "No hay cortocircuito. Resistencia: " << R << " ohmios\n";
    }
    return 0;
}
