// Autor: Axel Molineros
// Tema: 4) Diseñe la función que resuelva el problema de la ecuación cuadrática. La función debe recibir en total 5 parámetros: los 3 primeros son los valores a, b y c que representan los coeficientes de la ecuación. Los 2 parámetros restantes representan los valores resultantes de la ecuación, en este caso x1, y x2 que se deben pasar como referencias. La función devuelve falso, si la ecuación presenta errores; caso contrario devuelve verdadero.

#include<iostream>
#include<cmath>
using namespace std;

bool EcuacionCuadratica(double a, double b, double c, double& x1, double& x2) {
    
    // Calcular el discriminante
    double discriminante = b*b - 4*a*c;

    // Verificar si el discriminante es negativo
    if (discriminante < 0) {
        return false;
    }

    // Calcular las dos raíces
    x1 = (-b + sqrt(discriminante)) / (2*a);
    x2 = (-b - sqrt(discriminante)) / (2*a);

    return true;
}

int main() {
    double a, b, c;
    double x1, x2;

    cout << "Ingrese los coeficientes a, b, y c de la ecuacion cuadratica: ";
    cin >> a >> b >> c;

    if (EcuacionCuadratica(a, b, c, x1, x2)) {
        cout << "Las raices de la ecuacion son: x1 = " << x1 << " y x2 = " << x2 << endl;
    } else {
        cout << "La ecuacion no tiene soluciones reales." << endl;
    }

    return 0;
}
