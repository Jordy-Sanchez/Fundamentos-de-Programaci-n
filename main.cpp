#include <iostream>

using namespace std;

int main()
{
    float A, P, R, pi;
    cout <<"Valor del radio" << endl;
    cin >> R;

    pi=3.1416;

    P=2*pi*R;
    A=pi*R*R;

    cout << "el valor del perimetro es " << P << endl;
    cout << "el valor del area es " << A << endl;
    return 0;
}
