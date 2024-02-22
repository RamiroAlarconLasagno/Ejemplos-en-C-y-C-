#include <iostream>
#include <stdlib.h>
using namespace std;

//--------------------------------------------------------//
//             padre
//--------------------------------------------------------//
class Persona{
private: // Atriburos
    string nombre;
    int edad;
public: //Metodos
    Persona(string , int);
    void mostrar_persona();
};

//Constructor de la clase persona (clase padre)
Persona::Persona(string nombre, int edad){
    this->nombre = nombre;
    this->edad = edad;
}

void Persona::mostrar_persona(){
    cout<<"Nombre: "<< nombre<< endl;
    cout<<"Edad: "<<edad<< endl;
}
//--------------------------------------------------------//
//             hijo
//--------------------------------------------------------//
class Alumno : public Persona{
private: //Atributos del hijo
    string codigo_alumno;
    float nota_final;
public: //Metodos del hijo
    Alumno(string, int, string, float);// Constructor de la clase alumno
    void mostrar_alumno();
};

Alumno::Alumno(string nombre, int edad, string codigo_alumno, float nota_final):Persona(nombre, edad){
    this->codigo_alumno = codigo_alumno;
    this->nota_final = nota_final;
}
void Alumno::mostrar_alumno(){
    mostrar_persona();
    cout<<"Codigo alumno: "<<codigo_alumno<<endl;
    cout<<"Nota final: "<< nota_final<<endl;
}
//--------------------------------------------------------//
//             Main
//--------------------------------------------------------//
int main()
{
    Alumno alumno1("Ramiro", 36, "15168", 98.5);
    alumno1.mostrar_alumno();
    system("pause");
    return 0;
}
