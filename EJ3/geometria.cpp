#include "geometria.h"
#include <cmath>

namespace geometria {
    circulo::circulo(double radio) {
        this->radio = radio;
    }

    double circulo::area() {
        return PI * radio * radio;
    }

    double circulo::perimetro() {
        return 2 * PI * radio;
    }

    triangle::triangle(double base, double altura) {
        this->base = base;
        this->altura = altura;
    }

    double triangle::area() {
        return base * altura / 2;
    }

    double triangle::perimetro() {
        return base + altura + sqrt(base * base + altura * altura);
    }

}

