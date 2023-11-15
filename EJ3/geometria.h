
#ifndef EJ3_GEOMETRIA_H
#define EJ3_GEOMETRIA_H

namespace geometria {
    const double PI = 3.1415;

    class triangle {
        private:
            double base;
            double altura;

        public:
            triangle(double base, double altura);
            double area();
            double perimetro();
    };

    class circulo {
        private:
            double radio;

        public:
            circulo(double radio);
            double area();
            double perimetro();
};
}


#endif //EJ3_GEOMETRIA_H
