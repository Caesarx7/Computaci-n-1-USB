#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int numPolynomials, maxDegree;

    // Leer el número de polinomios y el mayor grado aceptado
    cout << "Ingrese el número de polinomios: ";
    cin >> numPolynomials;
    cout << "Ingrese el mayor grado aceptado: ";
    cin >> maxDegree;

    // Crear una matriz de coeficientes
    int** coefficients = new int*[numPolynomials];
    for (int i = 0; i < numPolynomials; ++i) {
        coefficients[i] = new int[maxDegree + 1]();
    }

    // Leer los coeficientes de cada polinomio
    for (int i = 0; i < numPolynomials; ++i) {
        cout << "Ingrese los coeficientes del polinomio " << i + 1 << " (de grado 0 a " << maxDegree << "):" << endl;
        for (int j = 0; j <= maxDegree; ++j) {
            cout << "Coeficiente de x^" << j << ": ";
            cin >> coefficients[i][j];
        }
    }

    // Sumar los polinomios
    int* sum = new int[maxDegree + 1]();
    for (int i = 0; i < numPolynomials; ++i) {
        for (int j = 0; j <= maxDegree; ++j) {
            sum[j] += coefficients[i][j];
        }
    }

    // Mostrar el resultado
    cout << "La suma de los polinomios es: ";
    for (int i = maxDegree; i >= 0; --i) {
        if (sum[i] != 0) {
            if (i != maxDegree && sum[i] > 0) cout << "+";
            cout << sum[i] << "x^" << i << " ";
        }
    }
    cout << endl;

    // Liberar memoria
    for (int i = 0; i < numPolynomials; ++i) {
        delete[] coefficients[i];
    }
    delete[] coefficients;
    delete[] sum;

    system("pause");
    system("color 0C");

    return 0;
}