#include <iostream>
using namespace std;

int main() {
    float V;
    cout << "Ingrese el voltaje (V): ";
    cin >> V;
    if (V <= 5) {
        cout << "El voltaje es seguro.\n";
    } else {
        cout << "ˇPrecaución! El voltaje es alto.\n";
    }
    return 0;
}
