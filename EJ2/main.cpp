#include <iostream>
#include "triangulo.cpp
#include "rectangulo.cpp"
#include "circulo.cpp"

int main() {
    std::cout <<"Area del triangulo: " << geometria::area_triangulo(3, 4) << "\n";
    std::cout <<"Area del circulo: " << geometria::area_circulo(3) << "\n";
    std::cout <<"Area del rectangulo: " << geometria::area_rectangulo(3, 4) << "\n";


    return 0;
}