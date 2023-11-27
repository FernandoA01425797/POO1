#include <iostream>
#include <cmath>
int main() {
	int a,b;
	std::cout <<"Inserta el primer numero:";
	std::cin >> a;
	std::cout <<"Inserta el segundo numero:";
	std::cin >> b;
	//suma
	int suma = a + b;
	std::cout <<"La suma de a y b es: " <<suma<< std::endl;
	//resta
	int resta = a - b;
	std::cout <<"La resta de a y b es: " <<resta<< std::endl;
	//Multiplicacion
	int mult = a * b;
	std::cout <<"La multiplicacion de a y b es: " <<mult<< std::endl;
	//Division
	int div = a / b;
	std::cout <<"La division de a y b es: " <<div<< std::endl;
	//modulo
	int mod = a % b;
	std::cout <<"El modulo de a por b es: " <<mod<< std::endl;
	//Potencia
	double potenciaa = pow(a, b);
	std::cout <<"El resultado de a a la potencia b es: " <<potenciaa<< std::endl;
	double potencia = pow(b, a);
	std::cout <<"El resultado de b a la potencia a es: " <<potencia<< std::endl;	
	return 0;
}
