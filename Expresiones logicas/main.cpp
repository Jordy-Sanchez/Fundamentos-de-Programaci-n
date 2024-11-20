#include <iostream>
using namespace std;

int main ()
{
int R4, R3, X, Y;

    bool R1, R2, R5;

    cout << "ingresar valor de X" << endl;
    cin >> X;

    cout << "ingresar valor de Y" << endl;
    cin >> Y;

    R1= (X<5);
    R2= (Y >=5);
    R3= !R2;
    R4= !R1;
    R5= (R4&&R3);
    cout << "el resulktado es" << R5;


    return 0;
}
