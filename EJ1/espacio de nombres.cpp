#include <iostream>

using namespace std;

namespace matematicas {
    int suma(int a, int b) {
        return a + b;
    }
    int resta(int a, int b) {
        return a - b;
    }
    int multiplicacion(int a, int b) {
        return a * b;
    }
    int division(int a, int b) {
        return a / b;
    }
    int logaritmo(int a, int b) {
        return a % b;
    }

}

int main() {

    cout << matematicas::suma(10, 5) << endl;
    cout << matematicas::resta(7, 2) << endl;
    cout << matematicas::multiplicacion(9, 4) << endl;
    cout << matematicas::division(1, 3) << endl;
    cout << matematicas::logaritmo(6, 17) << endl;


    return 0;
}
