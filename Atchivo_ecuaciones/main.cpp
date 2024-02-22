#include <iostream>
#include <fstream>
#include <regex>
#include <string>
#include <conio.h>

using namespace std;

class Calcular {
private:
    int Total = 0;
    string nombre_archivo;

public:
    Calcular(string);
    void filtrar_y_calcular();
    void mostrar_resultado();
    ~Calcular() {}

};

Calcular::Calcular(string nombre_archivo) {
    this->nombre_archivo = nombre_archivo;
}

void Calcular::filtrar_y_calcular() {
    ifstream inFile(nombre_archivo);
    string linea;
    smatch coincidencia;
    regex patronEcuacion(R"(^\s*(\d{1,2})\s*([-+])\s*(\d{1,2})\s*$)");
    while (getline(inFile, linea)) {
        if (regex_match(linea, coincidencia, patronEcuacion)) {
            cout<<linea<<endl;
            int num1 = stoi(coincidencia[1]);
            char operando = coincidencia[2].str()[0];
            int num2 = stoi(coincidencia[3]);

            int resultado;
            if (operando == '+') {
                resultado = num1 + num2;
            } else if (operando == '-') {
                resultado = num1 - num2;
            }
            Total += resultado;
        }
    }
    inFile.close();
}

void Calcular::mostrar_resultado() {
    cout <<"El resultado es: "<< Total << endl;
}

int main() {
     Calcular calcula("C:\\Users\\Ingra\\OneDrive\\Documentos\\POO\\Atchivo_ecuaciones\\archivo.txt");
    calcula.filtrar_y_calcular();
    calcula.mostrar_resultado();
    getch();
    return 0;
}

