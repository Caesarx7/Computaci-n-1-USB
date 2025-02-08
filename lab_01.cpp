#include <iostream>
#include <stdlib.h>  //Libreria que permitira crear un delay antes de que se cierre el programa para mostrar los resultados

int main() {

    float num1, num2, num3, sum;    //Declaración de variables tipo float


    std::cout << "Ingrese el primer numero: ";     //Solicitud de datos
    std::cin >> num1;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;

    std::cout << "Ingrese el tercer numero: ";
    std::cin >> num3;

    sum = num1 + num2 + num3;        //Operación suma


    std::cout << "La suma de los tres numeros es: " << sum << std::endl;     //Output con el resultado

    system("pause");     //Pausa como control de proceso antes de que se cierre el programa por si solo y así poder ver los resultados

        return 0;
}
