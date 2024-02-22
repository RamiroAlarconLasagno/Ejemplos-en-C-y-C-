#include <iostream>
#include <string>

using namespace std;

//-------------------------------------------//
//                  Persona
//-------------------------------------------//
class Persona {
private:
    string nombre;
    int edad;

public:
    Persona(const string& nombre, int edad) : nombre(nombre), edad(edad) {}

    string getNombre() const {
        return nombre;
    }

    int getEdad() const {
        return edad;
    }

    virtual void mostrar() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
    }
};

//-------------------------------------------//
//                  Empleado
//-------------------------------------------//
class Empleado : public Persona {
private:
    double numero_seguro_social;

public:
    Empleado(const string& nombre, int edad, double numero_seguro_social)
        : Persona(nombre, edad), numero_seguro_social(numero_seguro_social) {}

    double getNumeroSeguroSocial() const {
        return numero_seguro_social;
    }

    void mostrar() const override {
        Persona::mostrar();
        cout << "Numero de seguro social: " << numero_seguro_social << endl;
    }
};

//-------------------------------------------//
//                  Estudiante
//-------------------------------------------//
class Estudiante : public Persona {
private:
    int legajo;

public:
    Estudiante(const string& nombre, int edad, int legajo)
        : Persona(nombre, edad), legajo(legajo) {}

    int getLegajo() const {
        return legajo;
    }

    void mostrar() const override {
        Persona::mostrar();
        cout << "Legajo: " << legajo << endl;
    }
};

//-------------------------------------------//
//                  Universitario
//-------------------------------------------//
class Universitario : public Estudiante {
private:
    bool tiene_titulo;

public:
    Universitario(const string& nombre, int edad, int legajo, bool tiene_titulo)
        : Estudiante(nombre, edad, legajo), tiene_titulo(tiene_titulo) {}

    bool tieneTitulo() const {
        return tiene_titulo;
    }

    void mostrar() const override {
        Estudiante::mostrar();
        cout << "Tiene título: " << (tiene_titulo ? "Sí" : "No") << endl;
    }
};

//-------------------------------------------//
//                  Main
//-------------------------------------------//
int main() {
    Empleado empleado1("Ramiro", 36, 846514213);
    empleado1.mostrar();

    Universitario universitario1("Astrid", 32, 52326, true);
    universitario1.mostrar();

    return 0;
}
