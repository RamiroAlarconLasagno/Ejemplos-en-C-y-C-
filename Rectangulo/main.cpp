#include <iostream>
using namespace std;


class Rectangulo{
    private: //Atributos
        float largo;
        float ancho;
        float alto;
        float perimetro = 0;
        float area = 0;
    public: //Metodos
        Rectangulo(float, float, float); //Constructor
        void calcular_perimetro();
        void calcular_area();
        float get_perimetro();
        float get_area();
};

Rectangulo::Rectangulo(float largo, float ancho, float alto){
    this->largo = largo;
    this->ancho = ancho;
    this->alto = alto;
}

void Rectangulo::calcular_area(){
    area = alto*ancho*largo;
}

void Rectangulo::calcular_perimetro(){
    perimetro = (alto*4)+(ancho*4)+(largo*4);
}

float Rectangulo::get_area(){
    cout<<"El area es: "<< area<<endl;
}

float Rectangulo::get_perimetro(){
    cout<<"El perimetro es: "<< perimetro <<endl;
}

int main()
{
    Rectangulo r1(10,10,10);
    r1.calcular_area();
    r1.get_area();
    r1.calcular_perimetro();
    r1.get_perimetro();
    return 0;
}
