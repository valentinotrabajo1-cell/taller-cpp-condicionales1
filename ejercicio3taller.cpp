#include <iostream>

int main() {

const int LEER = 1;        
const int ESCRIBIR = 2;    
const int EJECUTAR = 4;    

    int permisosUsuario;

    std::cout << "\n Ingrese un valor entero de permisos\n\n";
    std::cin >> permisosUsuario;

    std::cout << "\n Permisos detectados \n";

    if (permisosUsuario & LEER) {
        std::cout << "\n Tiene permiso de LEER \n";
    }

    if (permisosUsuario & ESCRIBIR) {
        std::cout << "\n Tiene permiso de ESCRIBIR \n";
    }

    if (permisosUsuario & EJECUTAR) {
        std::cout << "\n Tiene permiso de EJECUTAR \n";
    }

    if (!(permisosUsuario & LEER) &&
        !(permisosUsuario & ESCRIBIR) &&
        !(permisosUsuario & EJECUTAR)) {
        std::cout << "\n No tiene permisos asignados \n";
    }

    return 0;
}