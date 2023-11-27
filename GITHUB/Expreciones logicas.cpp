#include <iostream>

int main() {
    int a = 10;
    int b = 5;

    // Operadores de comparaci�n
    bool esMayor = (a > b);       // Verdadero si a es mayor que b
    bool esIgual = (a == b);      // Verdadero si a es igual a b
    bool noEsIgual = (a != b);    // Verdadero si a no es igual a b

    std::cout << "a > b es verdadero: " << esMayor << std::endl;
    std::cout << "a == b es verdadero: " << esIgual << std::endl;
    std::cout << "a != b es verdadero: " << noEsIgual << std::endl;

    bool condicion1 = true;
    bool condicion2 = false;

    // Operadores l�gicos
    bool yLogico = (condicion1 && condicion2); // Verdadero si ambas condiciones son verdaderas
    bool oLogico = (condicion1 || condicion2); // Verdadero si al menos una condici�n es verdadera
    bool noLogico = !condicion1;               // Invierte la condici�n

    std::cout << "condicion1 && condicion2 es verdadero: " << yLogico << std::endl;
    std::cout << "condicion1 || condicion2 es verdadero: " << oLogico << std::endl;
    std::cout << "!condicion1 es verdadero: " << noLogico << std::endl;

    return 0;
}

