#include <iostream>

int main() {

    double peso;
    double altura;
    double imc;
    std::string rango;
    std::string accion;

    std::cout << "\n Ingrese su peso en kilogramos \n";
    std::cin >> peso;

    std::cout << "\n Ingrese su altura en metros \n";
    std::cin >> altura;

    if (altura <= 0 || peso <= 0) {
        std::cout << "\n Valores invalidos\n";
        return 0;
    }

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        rango = "Bajo peso";
        accion = "Consultar con nutricionista";
    }
    else if (imc < 25) {
        rango = "Normal";
        accion = "Mantener habitos saludables";
    }
    else if (imc < 30) {
        rango = "Sobrepeso";
        accion = "Revisar dieta y hacer ejercicio";
    }
    else if (imc < 35) {
        rango = "Obesidad I";
        accion = "Consultar con profesional de salud";
    }
    else {
        rango = "Obesidad II";
        accion = "Atencion medica urgente recomendada";
    }

    std::cout << "\nResultado\n";
    std::cout << "IMC: " << imc << "\n";
    std::cout << "Rango: " << rango << "\n";
    std::cout << "Accion sugerida: " << accion << "\n";

    return 0;
}