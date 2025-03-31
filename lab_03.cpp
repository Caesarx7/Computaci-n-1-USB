#include <iostream>
#include <fstream>

using namespace std;

struct Asignatura {
    char codigo[8];   // Espacio para 7 caracteres + terminador nulo
    char nombre[21];  // Espacio para 20 caracteres + terminador nulo
};

int main() {
    ofstream archivo("asignaturas.txt");
    if (!archivo) {
        cerr << "Error al abrir el archivo." << endl;
        return 1;
    }

    Asignatura asignaturas[5] = {
        {"MAT101", "Cálculo I"},
        {"FIS102", "Física I"},
        {"PROG200", "Programación"},
        {"EST203", "Estadística"},
        {"ALG301", "Álgebra Lineal"}
    };

    archivo << "Codigo | Nombre" << endl;
    archivo << "--------------------------" << endl;
    
    for (const auto &asignatura : asignaturas) {
        archivo << asignatura.codigo << " | " << asignatura.nombre << endl;
    }

    archivo.close();
    cout << "Archivo generado con éxito." << endl;
    return 0;
}
