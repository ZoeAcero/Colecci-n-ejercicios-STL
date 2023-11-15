#include "ciencia.h"
#include <iostream>
#include <cmath>

namespace ciencia {
    namespace fisica {
        double calcular_energia(double masa) {
            return masa * std::pow(velocidad_luz, 2);
        }

        double calcular_trabajo(double fuerza, double distancia) {
            return fuerza * distancia;
        }

        double calcular_potencia(double trabajo, double tiempo) {
            return trabajo / tiempo;
        }

    }
};
