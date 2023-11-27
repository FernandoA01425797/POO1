#include <iostream>
using namespace std;

class Automovil {
private:
    string modelo, color, marca;
    int velocidad, kilometraje;

public:
    void setVelocidad(int v) {
        velocidad = v;
    }

    int getVelocidad() {
        return velocidad;
    }

    int getKilometraje() {
        return kilometraje;
    }

    string getModelo() {
        return modelo;
    }

    string getColor() {
        return color;
    }

    string getMarca() {
        return marca;
    }

    void setModelo(string m) {
        modelo = m;
    }

    void setMarca(string m) {
        marca = m;
    }

    void setColor(string c) {
        color = c;
    }

    void setKilometraje(int k) {
        kilometraje = k;
    }

    void encender() {
        cout << "El motor se ha encendido\n";
    }

    void frenar() {
        cout << "Freno\n";
    }

    void apagar() {
        cout << "Apagar\n";
    }
};

int main() {
    Automovil miAuto;

    string marca, modelo, color;
    int kilometraje;

    cout << "Establece los atributos del auto\n";
    cout << "Marca ";
    cin >> marca;
    cout << "Modelo ";
    cin >> modelo;
    cout << "Color ";
    cin >> color;
    cout << "Kilometraje ";
    cin >> kilometraje;

    miAuto.setModelo(modelo);
    miAuto.setMarca(marca);
    miAuto.setColor(color);
    miAuto.setKilometraje(kilometraje);

    cout << "\nLos Datos del Carro son\n";
    cout << "Marca " << miAuto.getMarca() << endl;
    cout << "Modelo " << miAuto.getModelo() << endl;
    cout << "Color " << miAuto.getColor() << endl;
    cout << "Kilometraje " << miAuto.getKilometraje() << endl;

    cout << "\n";
    miAuto.encender();
    miAuto.frenar();
    miAuto.apagar();

    return 0;
}
