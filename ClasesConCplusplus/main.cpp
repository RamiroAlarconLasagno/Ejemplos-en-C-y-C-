#include <iostream>
#include <string>

using namespace std;

class Persona{
    private:// Atributos
        int edad;
        string nombre;

    public: //Metodos
        Persona(int, string);// Constructor
        void leer();
        void correr();
};
//Constructor nos sirve para inicializar los atributos
Persona::Persona(int _edad, string _nombre){
    edad = _edad;
    nombre = _nombre;
}

void Persona::leer(){
    cout<<"Soy "<< nombre<< " y estoy leyendo un libro"<< endl;
}

void Persona::correr(){
    cout<<"Soy "<< nombre<< " y estoy saliendo a correr y tengo "<<edad<<" años"<< endl;
}

//-----------------------------------------------------------------
// Main
//-----------------------------------------------------------------
int main() {
    Persona p1 = Persona(20, "Ramiro");
    p1.leer(); // Agrega los paréntesis aquí


    Persona p2(19, "Maria");
    p2.correr();

    return 0;
}
