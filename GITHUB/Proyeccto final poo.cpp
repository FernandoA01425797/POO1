#include <iostream>
#include <string>


class SistemaSeguridad {
private:
    static const std::string nombreUsuarioCorrecto;
    static const std::string contrasenaCorrecta;

public:
    static bool autenticar() {
        std::string nombreUsuario;
        std::string contrasena;

        std::cout << "Ingrese nombre de usuario: ";
        std::cin >> nombreUsuario;

        std::cout << "Ingrese contraseña: ";
        std::cin >> contrasena;

        return (nombreUsuario == nombreUsuarioCorrecto && contrasena == contrasenaCorrecta);
    }
};

//aqui se encuentran la contraseña y el usuario pueden modificar sin miedo :)
const std::string SistemaSeguridad::nombreUsuarioCorrecto = "Fer";
const std::string SistemaSeguridad::contrasenaCorrecta = "123";

class Empleado {
private:
    std::string nombre;
    int ID;
    double salarioBase;
    double bonos;
    double deducciones;
    double salarioFinal;

public:
    Empleado(std::string nombre, int ID, double salarioBase, double bonos, double deducciones)
        : nombre(nombre), ID(ID), salarioBase(salarioBase), bonos(bonos), deducciones(deducciones) {
        calcularSalarioFinal();
    }

    void calcularSalarioFinal() {
        salarioFinal = salarioBase + bonos - deducciones;
    }

    std::string obtenerNombre() const {
        return nombre;
    }

    int obtenerID() const {
        return ID;
    }

    double obtenerSalarioBase() const {
        return salarioBase;
    }

    double obtenerBonos() const {
        return bonos;
    }

    double obtenerDeducciones() const {
        return deducciones;
    }

    double obtenerSalarioFinal() const {
        return salarioFinal;
    }

    void establecerSalarioBase(double nuevoSalarioBase) {
        salarioBase = nuevoSalarioBase;
        calcularSalarioFinal();
    }

    void establecerBonos(double nuevosBonos) {
        bonos = nuevosBonos;
        calcularSalarioFinal();
    }

    void establecerDeducciones(double nuevasDeducciones) {
        deducciones = nuevasDeducciones;
        calcularSalarioFinal();
    }
};

void mostrarInformacionEmpleado(const Empleado& empleado) {
    std::cout << "Nombre: " << empleado.obtenerNombre() << std::endl;
    std::cout << "ID: " << empleado.obtenerID() << std::endl;
    std::cout << "Salario Base: $" << empleado.obtenerSalarioBase() << std::endl;
    std::cout << "Bonos: $" << empleado.obtenerBonos() << std::endl;
    std::cout << "Deducciones: $" << empleado.obtenerDeducciones() << std::endl;
    std::cout << "Salario Final: $" << empleado.obtenerSalarioFinal() << std::endl;
    std::cout << "--------------------------------------" << std::endl;
}

void mostrarPlantillaCompleta(Empleado* empleados[], int tamano) {
    for (int i = 0; i < tamano; ++i) {
        std::cout << "Información del Empleado " << i + 1 << ":" << std::endl;
        mostrarInformacionEmpleado(*empleados[i]);
    }
}

int main() {
    if (!SistemaSeguridad::autenticar()) {
        std::cout << "Autenticación fallida. Saliendo del programa." << std::endl;
        return 0;
    }

    const int tamanoMaximo = 10;
    Empleado* empleados[tamanoMaximo];
    int tamanoArreglo = 0;

    int opcion;
    do {
        
        std::cout << "Módulo Empleados" << std::endl;
        std::cout << "1. Agregar nuevo empleado" << std::endl;
        std::cout << "2. Consultar empleado individual" << std::endl;
        std::cout << "3. Consultar plantilla completa" << std::endl;
        std::cout << "4. Modificar empleado" << std::endl;
        std::cout << "5. Eliminar empleado" << std::endl;
        std::cout << "6. Actualizar salarios (base, bonos y deducciones)" << std::endl;
        std::cout << "0. Salir" << std::endl;
        std::cout << "Ingrese la opción deseada: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
               
                if (tamanoArreglo < tamanoMaximo) {
                    std::string nombre;
                    int ID;
                    double salarioBase, bonos, deducciones;

                    std::cout << "Ingrese el nombre del nuevo empleado: ";
                    std::cin.ignore(); // Para limpiar el buffer del teclado antes de getline
                    std::getline(std::cin, nombre);

                    std::cout << "Ingrese el ID del nuevo empleado: ";
                    std::cin >> ID;

                    std::cout << "Ingrese el salario base del nuevo empleado: ";
                    std::cin >> salarioBase;

                    std::cout << "Ingrese los bonos del nuevo empleado: ";
                    std::cin >> bonos;

                    std::cout << "Ingrese las deducciones del nuevo empleado: ";
                    std::cin >> deducciones;

                    empleados[tamanoArreglo] = new Empleado(nombre, ID, salarioBase, bonos, deducciones);
                    tamanoArreglo++;
                } else {
                    std::cout << "El arreglo está lleno. No se pueden agregar más empleados." << std::endl;
                }
                break;
            }
            case 2: {
                
                int indice;
                std::cout << "Ingrese el índice del empleado a consultar: ";
                std::cin >> indice;

                if (indice >= 0 && indice < tamanoArreglo) {
                    mostrarInformacionEmpleado(*empleados[indice]);
                } else {
                    std::cout << "Índice inválido." << std::endl;
                }
                break;
            }
            case 3: {
               
                mostrarPlantillaCompleta(empleados, tamanoArreglo);
                break;
            }
            case 4: {
               
                int indice;
                std::cout << "Ingrese el índice del empleado a modificar: ";
                std::cin >> indice;

                if (indice >= 0 && indice < tamanoArreglo) {
                    double nuevoSalarioBase, nuevosBonos, nuevasDeducciones;

                    std::cout << "Ingrese el nuevo salario base: ";
                    std::cin >> nuevoSalarioBase;

                    std::cout << "Ingrese los nuevos bonos: ";
                    std::cin >> nuevosBonos;

                    std::cout << "Ingrese las nuevas deducciones: ";
                    std::cin >> nuevasDeducciones;

                    empleados[indice]->establecerSalarioBase(nuevoSalarioBase);
                    empleados[indice]->establecerBonos(nuevosBonos);
                    empleados[indice]->establecerDeducciones(nuevasDeducciones);

                    std::cout << "Empleado modificado correctamente." << std::endl;
                } else {
                    std::cout << "Índice inválido." << std::endl;
                }
                break;
            }
            case 5: {
                
                int indice;
                std::cout << "Ingrese el índice del empleado a eliminar: ";
                std::cin >> indice;

                if (indice >= 0 && indice < tamanoArreglo) {
                    delete empleados[indice];
                    for (int i = indice; i < tamanoArreglo - 1; ++i) {
                        empleados[i] = empleados[i + 1];
                    }
                    tamanoArreglo--;
                    std::cout << "Empleado eliminado correctamente." << std::endl;
                } else {
                    std::cout << "Índice inválido." << std::endl;
                }
                break;
            }
            case 6: {
               
                int indice;
                std::cout << "Ingrese el índice del empleado a actualizar salarios: ";
                std::cin >> indice;

                if (indice >= 0 && indice < tamanoArreglo) {
                    double nuevoSalarioBase, nuevosBonos, nuevasDeducciones;

                    std::cout << "Ingrese el nuevo salario base: ";
                    std::cin >> nuevoSalarioBase;

                    std::cout << "Ingrese los nuevos bonos: ";
                    std::cin >> nuevosBonos;

                    std::cout << "Ingrese las nuevas deducciones: ";
                    std::cin >> nuevasDeducciones;

                    empleados[indice]->establecerSalarioBase(nuevoSalarioBase);
                    empleados[indice]->establecerBonos(nuevosBonos);
                    empleados[indice]->establecerDeducciones(nuevasDeducciones);

                    std::cout << "Salarios actualizados correctamente." << std::endl;
                } else {
                    std::cout << "Índice inválido." << std::endl;
                }
                break;
            }
           
        }

    } while (opcion != 0);

    for (int i = 0; i < tamanoArreglo; ++i) {
        delete empleados[i];
    }

    return 0;
}

