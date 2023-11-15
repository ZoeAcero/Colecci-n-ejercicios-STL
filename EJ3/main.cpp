#include <iostream>
#include "geometria.h"

using namespace std;

int main() {
    geometria::circulo c(10);
    cout << "Area: " << c.area() << endl;
    cout << "Perimetro: " << c.perimetro() << endl;

    geometria::triangle t(15, 2);
    cout << "Area: " << t.area() << endl;
    cout << "Perimetro: " << t.perimetro() << endl;


    return 0;
}
