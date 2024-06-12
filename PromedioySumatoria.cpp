// Fecha: 2024-06-10
// Autor: Axel Molineros
// 6) Escriba la función que recibe como parámetro 3 números reales de doble precisión y devuelve el promedio de estos números. Además, en un parámetro pasado por referencia devuelve la sumatoria de los mismos.

#include <iostream>

// Función para calcular el promedio y la sumatoria de tres números de doble precisión
double promedioYSuma(double a, double b, double c, double &suma) {
    suma = a + b + c;
    return suma / 3.0;
}

int main() {
    double num1 = 10.5, num2 = 20.5, num3 = 30.5;
    double suma;
    double prom = promedioYSuma(num1, num2, num3, suma);
    std::cout << "El promedio es: " << prom << std::endl;
    std::cout << "La sumatoria es: " << suma << std::endl;
    return 0;
}