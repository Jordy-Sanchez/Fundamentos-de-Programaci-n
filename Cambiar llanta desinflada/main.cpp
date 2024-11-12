#include <iostream>
using namespace std;

int main() {
    char continuar;
float gata, llantarepuesto, llavedecruz;

    cout << "¿Tiene llanta de repuesto? (s/n): ";
    cin >> continuar;
    if (continuar == 'n' || continuar == 'N') {
        cout << "Conseguir una. ";
        cout << "Presiona cualquier tecla para continuar.\n";
        cin >> continuar;
    }

    cout << "¿Tiene gata? (s/n): ";
    cin >> continuar;
    if (continuar == 'n' || continuar == 'N') {
        cout << "Conseguir una. ";
        cout << "Presiona cualquier tecla para continuar.\n";
        cin >> continuar;
    }

    cout << "¿Tiene llave de cruz? (s/n): ";
    cin >> continuar;
    if (continuar == 'n' || continuar == 'N') {
        cout << "Conseguir una. ";
        cout << "Presiona cualquier tecla para continuar.\n";
        cin >> continuar;
    }


    cout << "Activar freno de mano y apagando el motor. ";
    cout << "Presiona cualquier tecla para continuar.\n";
    cin >> continuar;


    cout << "Aflojar las tuercas de la llanta desinflada. ";
    cout << "Presiona cualquier tecla para continuar.\n";
    cin >> continuar;


    cout << "Colocar la gata en el punto adecuado debajo del auto. ";
    cout << "Presiona cualquier tecla para continuar.\n";
    cin >> continuar;


    cout << "Levantar el auto con el gato hasta que la llanta esté en el aire. ";
    cout << "Presiona cualquier tecla para continuar.\n";
    cin >> continuar;


    cout << "Quitar las tuercas completamente y retirando la llanta desinflada. ";
    cout << "Presiona cualquier tecla para continuar.\n";
    cin >> continuar;


    cout << "Colocar la llanta de repuesto en su lugar. ";
    cout << "Presiona cualquier tecla para continuar.\n";
    cin >> continuar;


    cout << "Atornillar las tuercas de la llanta de repuesto con la mano. ";
    cout << "Presiona cualquier tecla para continuar.\n";
    cin >> continuar;


    cout << "Bajar el auto con el gato hasta que la llanta toque el suelo. ";
    cout << "Presiona cualquier tecla para continuar.\n";
    cin >> continuar;


    cout << "Ajustar las tuercas firmemente con la llave de cruz. ";
    cout << "Presiona cualquier tecla para continuar.\n";
    cin >> continuar;


    cout << "Guardar el equipo (llanta desinflada, gato, llave de cruz) en el auto. ";
    cout << "Presiona cualquier tecla para finalizar.\n";
    cin >> continuar;


    cout << "Proceso de cambio de llanta completado.\n";

    return 0;
}
