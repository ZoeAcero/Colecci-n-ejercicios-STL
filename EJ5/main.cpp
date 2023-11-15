#include <iostream>
#include <vector>
#include <map>
#include <set>

int main() {
    // Usando vector
    std::cout << "Vector:\n";
    std::vector<int> numeros = {1, 2, 3, 4, 5};

    // Agregar elementos al vector
    numeros.push_back(6);

    // Mostrar elementos del vector
    std::cout << "Elementos del vector: ";
    for (const auto& numero : numeros) {
        std::cout << numero << " ";
    }
    std::cout << "\n";

    // Usando map
    std::cout << "\nMap:\n";
    std::map<std::string, int> edades;

    // Agregar elementos al map
    edades["Alice"] = 25;
    edades["Bob"] = 30;
    edades["Charlie"] = 22;

    // Buscar un elemento en el map
    std::string nombre = "Bob";
    auto iter = edades.find(nombre);
    if (iter != edades.end()) {
        std::cout << nombre << " tiene " << iter->second << " años.\n";
    } else {
        std::cout << nombre << " no encontrado en el map.\n";
    }

    // Usando set
    std::cout << "\nSet:\n";
    std::set<int> conjunto = {4, 1, 7, 2, 5};

    // Agregar elementos al set
    conjunto.insert(3);

    // Eliminar un elemento del set
    conjunto.erase(5);

    // Mostrar elementos del set
    std::cout << "Elementos del set: ";
    for (const auto& elemento : conjunto) {
        std::cout << elemento << " ";
    }
    std::cout << "\n";

    return 0;
}
