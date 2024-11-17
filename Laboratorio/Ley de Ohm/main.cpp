#include <iostream>
using namespace std;

int main() {
    float V, I, R;
    int opcion;
    cout << "Ley de Ohm\n1. Calcular Voltaje\n2. Calcular Corriente\n3. Calcular Resistencia\nElija una opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        cout << "Ingrese la corriente (I): ";
        cin >> I;
        cout << "Ingrese la resistencia (R): ";
        cin >> R;
        V = I * R;
        cout << "El voltaje es: " << V << " V\n";
    } else if (opcion == 2) {
        cout << "Ingrese el voltaje (V): ";
        cin >> V;
        cout << "Ingrese la resistencia (R): ";
        cin >> R;
        I = V / R;
        cout << "La corriente es: " << I << " A\n";
    } else if (opcion == 3) {
        cout << "Ingrese el voltaje (V): ";
        cin >> V;
        cout << "Ingrese la corriente (I): ";
        cin >> I;
        R = V / I;
        cout << "La resistencia es: " << R << " ohmios\n";
    } else {
        cout << "Opción inválida.\n";
    }
    return 0;
}
