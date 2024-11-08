#include <iostream>

using namespace std;

int main()
{
    float Vi, R, I, Vf, Vt;
    cout << "Indique el valor del voltaje inicial" << endl;
    cin >> Vi;
    cout << "Valor de la resistencia" << endl;
    cin >> R;
    cout << "Valor de la corriente" << endl;
    cin >> I;

    Vf= I*R;
    Vt= Vi-Vf;
    cout << "El voltaje total es:" << Vt << endl;

    if(Vt==0) {
        cout << "El foco esta apagado" << endl;
    }
    else if (Vt>=1 && Vt<=5) {
        cout << "El foco esta encendido" << endl;
    }
    else
        cout << "Corto circuito" << endl;

    return 0;
}
