#include <iostream>
using namespace std;

int main() {
    float joules, kWh;
    cout << "Ingrese la energ�a en Joules: ";
    cin >> joules;
    kWh = joules * 2.77778e-7;
    cout << "La energ�a en kWh es: " << kWh << "\n";
    return 0;
}
