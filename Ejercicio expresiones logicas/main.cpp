#include <iostream>

using namespace std;

int main()
{
    float X, Y, Z, R1;
    bool R2;

    cout << "Ingrese el valor de X" << endl;
    cin >> X;

    cout << "Ingrese el valor de Y" << endl;
    cin >> Y;

    cout << "Ingrese el valor de Z" << endl;
    cin >> Z;

    R1 = (Y+Z);

    if (X >= R1) {
        cout << "R1 es " << "R1" << endl;

    }
    else {
        cout << " X es mayor" << "X" << endl;
    }

    return 0;
}
