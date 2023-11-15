#include <iostream>
#include "ciencia.h"

using namespace std;

int main() {
    cout << "Energía: " << ciencia::fisica::calcular_energia(5) << endl;
    cout << "Trabajo: " << ciencia::fisica::calcular_trabajo(7, 10) << endl;
    cout << "Potencia: " << ciencia::fisica::calcular_potencia(3, 9) << endl;
    return 0;
}
