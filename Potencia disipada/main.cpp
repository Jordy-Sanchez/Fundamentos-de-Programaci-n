#include <iostream>

using namespace std;

int main()
{
    char continuar;

    float  R, I, V, P;
    cout << "Vamos a calcular la intensidad"<< endl ;
    cout << "Presiona cualquier tecla para continuar.\n";
    cin >> continuar;

    cout << "Indique el valor del voltaje" << endl;
    cin >> V;
    cout << "Valor de la resistencia es 10" << endl;
     R=10;
    I= V/R;

    cout << "La Corriente es:" << I << endl;

    if(I==0) {
        cout<< "No se puede resolver la potencia" << endl;
    }

    cout << "Con la Corriente ya podemos calcular la potencia"<< endl ;
    cout << "Presiona cualquier tecla para continuar.\n";
    cin >> continuar;


    P= I*I *R;
    cout << "La potencia es:" << P << endl;

    if(P==0) {
        cout << "No hay potencia" << endl;
    }
    else if (P>=1 && P<=22) {
        cout << "Funciona" << endl;
    }
    else
        cout << "Corto circuito" << endl;

        cout<< "formulas utilizadas:  I= V/R     P=I*I*R" <<endl;
        cout<< "Recordar que P no es una constante por ende cada formula varia en su resultado" <<endl;
    return 0;
}
