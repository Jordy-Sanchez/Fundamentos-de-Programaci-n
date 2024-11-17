#include <iostream>
using namespace std;

int main() {
    int banda1, banda2;
    cout << "Ingrese el valor de la primera banda (0-9): ";
    cin >> banda1;
    cout << "Ingrese el valor de la segunda banda (0-9): ";
    cin >> banda2;
    if (banda1 >= 0 && banda1 <= 9 && banda2 >= 0 && banda2 <= 9) {
        int resistencia = banda1 * 10 + banda2;
        cout << "La resistencia es: " << resistencia << " ohmios\n";
    } else {
        cout << "Valores inválidos.\n";
    }
    return 0;
}
