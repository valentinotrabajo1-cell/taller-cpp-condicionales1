#include <iostream>
#include <cmath>    // Para fmod()

int main() {

    double primerOperando;
    double segundoOperando;
    char operador;

    std::cout << "\n Ingrese el primer operando \n";
    std::cin >> primerOperando;

    std::cout << "\n Ingrese el segundo operando \n";
    std::cin >> segundoOperando;

    std::cout << "\n Ingrese el operador (+, -, *, /, %) \n";
    std::cin >> operador;

    std::cout << "\n Resultado \n";

    switch (operador) {

        case '+':
            std::cout << " El resultado es " << (primerOperando + segundoOperando) << "\n";
            break;

        case '-':
            std::cout << " El resultado es " << (primerOperando - segundoOperando) << "\n";
            break;

        case '*':
            std::cout << " El resultado es " << (primerOperando * segundoOperando) << "\n";
            break;

        case '/':
            if (segundoOperando != 0) {
                std::cout << " El resultado es " << (primerOperando / segundoOperando) << "\n";
            } else {
                std::cout << " Error: division por cero \n";
            }
            break;

        case '%':
            if (segundoOperando != 0) {
                std::cout << " El resultado es " << std::fmod(primerOperando, segundoOperando) << "\n\n";
            } else {
                std::cout << " Error: division por cero\n\n";
            }
            break;

        default:
            std::cout << " Operador no valido\n\n";
            break;
    }

    return 0;
}