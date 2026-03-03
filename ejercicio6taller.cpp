#include <iostream>

int main() {

    int a, b;

    std::cout << "\n Ingrese el primer entero \n";
    std::cin >> a;

    std::cout << "\nIngrese el segundo entero\n";
    std::cin >> b;

    std::cout << "\n Valores iniciales \n";
    std::cout << "a = " << a << " b = " << b << " \n";

    
    {
        int x = a;
        int y = b;
        int temp = x;
        x = y;
        y = temp;
        std::cout << "\nSwap con variable temporal \n";
        std::cout << "a = " << x << " b = " << y << " \n";
    }

    
    {
        int x = a;
        int y = b;
        x += y;    
        y = x - y; 
        x -= y;    
        std::cout << "\n Swap con operaciones aritmeticas \n";
        std::cout << "a = " << x << " b = " << y << " \n";
    }

   
    {
        int x = a;
        int y = b;
        x ^= y;
        y ^= x;
        x ^= y;
        std::cout << "\nSwap con XOR\n";
        std::cout << "a = " << x << " b = " << y << "\n";
    }

    return 0;
}