
#ifndef EJ4_CIENCIA_H
#define EJ4_CIENCIA_H

namespace ciencia {
    namespace fisica {
        const double GRAVEDAD = 9.8;
        const double velocidad_luz = 299792458;

        double calcular_energia(double masa);
        double calcular_trabajo(double fuerza, double distancia);
        double calcular_potencia(double trabajo, double tiempo);
    }
};


#endif //EJ4_CIENCIA_H
