// Fecha: 2024-06-10
// Autor: Axel Molineros
// 5) Escriba la función que recibe como parámetro 3 números reales de doble precisión y devuelve el promedio de estos números.

#include <iostream>

// Función para calcular el promedio de tres números de doble precisión
double promedio(double a, double b, double c) {
    return (a + b + c) / 3.0;
}

int main() {
    double num1 = 10.5, num2 = 20.5, num3 = 30.5;
    std::cout << "El promedio es: " << promedio(num1, num2, num3) << std::endl;
    return 0;
}
