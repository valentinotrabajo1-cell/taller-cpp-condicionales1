#include <iostream>
#include <string>

int main() {

    double notaEstudiante;
    std::string letra;
    std::string estado;

    std::cout << "\nIngrese la nota del estudiante (0-100)\n";
    std::cin >> notaEstudiante;

    
    if (notaEstudiante < 0 || notaEstudiante > 100) {
        std::cout << "\nNota invalida\n";
        return 0;
    }

    
    if (notaEstudiante >= 90) {
        letra = "A";
    }
    else if (notaEstudiante >= 80) {
        letra = "B";
    }
    else if (notaEstudiante >= 70) {
        letra = "C";
    }
    else if (notaEstudiante >= 60) {
        letra = "D";
    }
    else {
        letra = "F";
    }


    estado = (notaEstudiante >= 60) ? "Aprobado" : "Reprobado";

    std::cout << "\nResultado\n";
    std::cout << "Letra: " << letra << "\n";
    std::cout << "Estado: " << estado << "\n";

    return 0;
}