#include <iostream>
using namespace std;

int main() {
    float V, I, P;
    cout << "Ingrese el voltaje (V): ";
    cin >> V;
    cout << "Ingrese la corriente (I): ";
    cin >> I;
    P = V * I;
    cout << "La potencia eléctrica es: " << P << " W\n";
    return 0;
}
