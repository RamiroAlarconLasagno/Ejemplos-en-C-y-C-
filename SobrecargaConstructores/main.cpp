#include <iostream>
#include <stdlib.h>

using namespace std;

class Fecha{
private:
    int dia, mes, anio;
public:
    Fecha(int, int, int); //Constructor 1
    Fecha(long);          //Constructor 2
    void mostrar_fecha();
};

Fecha::Fecha (int dia, int mes, int anio){
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
}

Fecha::Fecha(long fecha){
    this->anio = int(fecha/10000);
    this->mes = int((fecha - anio*10000)/100);
    this->dia = int((fecha-anio*10000)-mes*100);
}

void Fecha::mostrar_fecha(){
    cout<<"La fecha es: "<<anio<<"/"<<mes<<"/"<<dia<<endl;
}

int main()
{
    Fecha hoy (4,2,2024);
    Fecha ayer(20240203);
    hoy.mostrar_fecha();
    ayer.mostrar_fecha();
    return 0;
}
