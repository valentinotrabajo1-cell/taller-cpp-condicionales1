#include <iostream>
#include <cmath>

int main() {

double primerLado;
double segundoLado;
double tercerLado;

//ingreso de los datos//

std::cout << "\n Ingrese el primer lado\n";
std::cin >> primerLado;

std::cout << "\n Ingrese el segundo lado \n";
std::cin >> segundoLado;

std::cout << "\n Ingrese el tercer lado \n";
std::cin >> tercerLado;


if (primerLado > 0 && segundoLado > 0 && tercerLado > 0 &&
        primerLado + segundoLado > tercerLado &&
        primerLado + tercerLado > segundoLado &&
        segundoLado + tercerLado > primerLado) 
        {

std::cout << "\n Si es un triangulo valido \n";

//aca defino el tipo de triangulo segiun los lados//
if (primerLado == segundoLado && segundoLado == tercerLado) {
std::cout << "\n Tipo Equilatero \n";
        
}else if (primerLado == segundoLado || 
primerLado == tercerLado || 
segundoLado == tercerLado) {
std::cout << "\n Tipo  Isosceles \n";
}else
        
{
std::cout << "\n Tipo Escaleno \n";
}

   
double mayor = primerLado;

if (segundoLado > mayor)
mayor = segundoLado;

if (tercerLado > mayor)
mayor = tercerLado;

double sumaCuadrados = std::pow(primerLado, 2) +
        std::pow(segundoLado, 2) +
        std::pow(tercerLado, 2) -
        std::pow(mayor, 2);

//ahora por angulos los clasifico//
if (std::pow(mayor, 2) == sumaCuadrados) {
std::cout << "\n Tipo por angulos Rectangulo \n";

}else if (std::pow(mayor, 2) < sumaCuadrados) {
std::cout << "\n Tipo por angulos Acutangulo \n";
       
}else{
std::cout << "\n Tipo por angulos Obtusangulo \n";
}

}else{
std::cout << "\n Los lados no forman un triangulo valido \n";
}

    return 0;
}