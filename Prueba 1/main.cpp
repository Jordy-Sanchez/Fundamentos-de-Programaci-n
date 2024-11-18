#include <iostream>

using namespace std;

int main()
{
    float I, V, Vf, R;
V=12;
    cout << "ingrese el voltaje del foco" << endl;
    cin >> Vf;

    cout  << "Ingrese el valor de la resistencia" << endl;
    cin >> R;


    I=(V-Vf)/R;

    if (I<0)
        {
        cout << "corto circuito" << endl;

    }
    else if (I== 0.5)
     {
        cout << "cambiar resistencia" <<endl;

    }
    else if (I>1)
        {
        cout << "funciona" << endl;
    }

    return 0;

}
