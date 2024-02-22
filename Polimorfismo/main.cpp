#include<iostream>
#include<stdlib.h>>

using namespace std;
//-------------------------------------------
//  Persona
//-------------------------------------------
class Persona{
private:
    string nombre;
    int edad;
public:
    Persona(string, int);
    virtual void mostrar();
};
//-------------------------------------------
Persona::Persona(string nombre, int edad){
    this->nombre = nombre;
    this->edad = edad;
}
void Persona::mostrar(){
    cout<<"Su nombre es: "<< nombre<< endl;
    cout<< "Su edad es: "<< edad<< endl;
}

//-------------------------------------------
//  Empleado
//-------------------------------------------
class Empleado:public Persona{
private:
    int cuil;
public:
    Empleado(string, int, int);
    void mostrar();
};
//-------------------------------------------
Empleado::Empleado(string nombre, int edad, int cuil):Persona(nombre, edad){
    this->cuil = cuil;
}

void Empleado::mostrar(){
    Persona::mostrar();
    cout<<"Su cuil es: "<< cuil<< endl;
}

//-------------------------------------------
//  Estudiante
//-------------------------------------------
class Estudiante:public Persona{
private:
    int legajo;
public:
    Estudiante(string, int, int);
    void mostrar();
};
//-------------------------------------------
Estudiante::Estudiante(string nombre, int edad, int legajo):Persona(nombre, edad){
    this->legajo = legajo;
}
void Estudiante::mostrar(){
    Persona::mostrar();
    cout<<"El legajo es: "<< legajo<< endl;
}

int main(){
    Persona *vector[3];

    vector[0] = new Estudiante("Astrid", 32, 45687);
    vector[1] = new Estudiante("Ramiro", 36, 15168);
    vector[2] = new Empleado("Fabio", 55, 654822);

    vector[0]->mostrar();
    vector[1]->mostrar();
    vector[2]->mostrar();

    return 0;
}
