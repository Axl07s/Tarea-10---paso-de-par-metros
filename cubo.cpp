// Fecha: 2024-06-10
// Autor: Axel Molineros
// 8) Escriba la función que recibe como parámetro un entero y devuelve el cubo del mismo.

#include <iostream>

// Función para calcular el cubo de un número entero
int cubo(int num) {
    return num * num * num;
}

int main() {
    int numero = 3;
    std::cout << "El cubo de " << numero << " es: " << cubo(numero) << std::endl;
    return 0;
}
