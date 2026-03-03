#include <iostream>
#include <algorithm> 

int main() {

    char tipoCliente;
    double montoCompra;
    char codigoCupon;
    bool finDeSemana;
    double descuento = 0.0;

    std::cout << "\nIngrese tipo de cliente (V para VIP, N para Normal)\n";
    std::cin >> tipoCliente;

    std::cout << "\nIngrese el monto de la compra\n";
    std::cin >> montoCompra;

    std::cout << "\nIngrese codigo de cupon (A, B, C)\n";
    std::cin >> codigoCupon;

    std::cout << "\nEs fin de semana? (1 = Si, 0 = No)\n";
    std::cin >> finDeSemana;

    
    if (tipoCliente == 'V' || tipoCliente == 'v') {
        descuento += 0.20; 
    } else if (tipoCliente == 'N' || tipoCliente == 'n') {
        descuento += 0.05;
    }

   
    if (montoCompra >= 500) {
        descuento += 0.10; 
    } else if (montoCompra >= 200) {
        descuento += 0.05; 
    }

    
    switch (codigoCupon) {
        case 'A':
        case 'a':
            descuento += 0.10; 
            break;
        case 'B':
        case 'b':
            descuento += 0.15;
            break;
        case 'C':
        case 'c':
            descuento += 0.20;
            break;
        default:
            break;
    }

   
    if (finDeSemana) {
        descuento += 0.05; 
    }

    
    descuento = std::min(descuento, 0.50);

    double precioFinal = montoCompra * (1 - descuento);

    std::cout << "\nResumen de compra\n";
    std::cout << "Monto original: $" << montoCompra << "\n";
    std::cout << "Descuento aplicado: " << descuento * 100 << "%\n";
    std::cout << "Precio final: $" << precioFinal << "\n";

    return 0;
}