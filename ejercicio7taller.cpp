#include <iostream>

int main() {

    int anio;
    std::cout << "\nIngrese un año\n";
    std::cin >> anio;

    bool divisiblePor4 = (anio % 4 == 0);
    bool divisiblePor100 = (anio % 100 == 0);
    bool divisiblePor400 = (anio % 400 == 0);

    std::cout << "\nRazonamiento paso a paso\n";
    std::cout << "Divisible por 4: " << (divisiblePor4 ? "Si" : "No") << "\n";
    std::cout << "Divisible por 100: " << (divisiblePor100 ? "Si" : "No") << "\n";
    std::cout << "Divisible por 400: " << (divisiblePor400 ? "Si" : "No") << "\n";

    bool bisiesto = (divisiblePor4 && (!divisiblePor100 || divisiblePor400));

    std::cout << "\nResultado\n";
    if (bisiesto) {
        std::cout << "El año " << anio << " es bisiesto\n";
    } else {
        std::cout << "El año " << anio << " no es bisiesto\n";
    }

    return 0;
}