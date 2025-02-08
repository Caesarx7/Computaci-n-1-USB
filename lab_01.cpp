#include <iostream>
#include <stdlib.h>

int main() {

    float num1, num2, num3, sum;

    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;

    std::cout << "Ingrese el tercer numero: ";
    std::cin >> num3;

    sum = num1 + num2 + num3;

    std::cout << "La suma de los tres numeros es: " << sum << std::endl;

    system("pause");

        return 0;
}