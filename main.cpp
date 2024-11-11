#include <iostream>

using namespace std;

int main()
{
    float A,B;
    cout << "Indique el valor de A" << endl;
    cin >> A;
    cout << "Indique el valor de B" << endl;
    cin >> B;

    if (A==B) {
        cout << "Los numero son iguales";
    }
    else if (A<B) {
        cout << "el numero mayor es" <<B<< endl;
    }
    else
    cout << "el numero menor es" << A << endl;
    return 0;
}
