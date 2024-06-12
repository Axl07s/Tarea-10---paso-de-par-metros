// Fecha: 2024-06-10
// Autor: Axel Molineros
// 7)  Escriba la función que determina si un número pasado como parámetro es múltiplo de 7.

#include <iostream>

// Función para determinar si un número es múltiplo de 7
bool esMultiploDeSiete(int num) {
    return num % 7 == 0;
}

int main() {
    int numero = 21;
    if (esMultiploDeSiete(numero)) {
        std::cout << numero << " es múltiplo de 7." << std::endl;
    } else {
        std::cout << numero << " no es múltiplo de 7." << std::endl;
    }
    return 0;
}
