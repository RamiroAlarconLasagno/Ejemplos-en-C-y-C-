#include <iostream>
#include <stdlib.h>
using namespace std;

//-------------------------------------------//
//                  Persona
//-------------------------------------------//
class Persona{
private:
    string nombre;
    int edad;
public:
    Persona(string, int);
    void mostrar_persona();
};

Persona::Persona(string nombre, int edad){
    this->nombre = nombre;
    this->edad = edad;
}

void Persona::mostrar_persona(){
    cout<<"Nombre: "<< nombre << endl;
    cout<<"Edad: " << edad << endl;
}
//-------------------------------------------//
//                  Empleado
//-------------------------------------------//
class Empleado:public Persona{
private:
    double numero_seguro_social;
public:
    Empleado(string, int, double);
    void mostrar_empleado();
};

Empleado::Empleado(string nombre, int edad, double numero_seguro_social):Persona(nombre, edad){
    this->numero_seguro_social = numero_seguro_social;
}
void Empleado::mostrar_empleado(){
    mostrar_persona();
    cout<<"Numero de seguro social: "<<numero_seguro_social<<endl;
}
//-------------------------------------------//
//                  Estudiante
//-------------------------------------------//
class Estudiante:public Persona{
private:
    int legajo;
public:
    Estudiante(string, int,int);
    void mostrar_estudiante();
};

Estudiante::Estudiante(string nombre, int edad,int legajo):Persona(nombre, edad){
    this->legajo = legajo;
}
void Estudiante::mostrar_estudiante(){
    mostrar_persona();
    cout<<"Legajo: "<<legajo<<endl;
}
//-------------------------------------------//
//                  Universitario
//-------------------------------------------//
class Universitario:public Estudiante{
private:
    bool titulo;
public:
    Universitario(string, int,int,bool);
    void mostrar_universitario();
};

Universitario::Universitario(string nombre, int edad, int legajo, bool titulo):Estudiante(nombre, edad, legajo){
    this->titulo = titulo;
}
void Universitario::mostrar_universitario(){
    mostrar_estudiante();
    cout<<"Tiene titulo: "<<titulo<< endl;
}
//-------------------------------------------//
//                  Main
//-------------------------------------------//
int main()
{
    Empleado empleado1("Ramiro", 36, 846514213);
    empleado1.mostrar_empleado();

    Universitario universitaria1("Astrid", 32, 52326, true);
    universitaria1.mostrar_universitario();
    return 0;
}
