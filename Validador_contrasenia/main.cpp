#include <iostream>
#include <conio.h>

using namespace std;

//------------------------------------//
//      Validador
//------------------------------------//
class Validator{
protected: // Cambiando de private a protected para permitir el acceso de clases derivadas
    int num[4];
public:
    void registrarValor(int, int);
    virtual bool esValido()=0;
    virtual ~Validator() {}
};
//------------------------------------//
void Validator::registrarValor(int v, int p){
    num[p] = v;
}
//------------------------------------//
//      Metodo 1
//------------------------------------//
class Metodo1:public Validator{
public:
    bool esValido() override;
};
//------------------------------------//
bool Metodo1::esValido(){
    if (num[0]==(num[2]-num[1]) && num[3]==(num[2]+num[1])){
        return true;
    }
    else return false;
}
//------------------------------------//
//      Metodo 2
//------------------------------------//
class Metodo2:public Validator{
public:
    bool esValido() override;
};
//------------------------------------//
bool Metodo2::esValido(){
    if ((num[0]+num[1])==(num[2]+num[3])){
        return true;
    }
    else return false;
}
//------------------------------------//
//      Main
//------------------------------------//
int main()
{
    Validator * metodos[2];
    metodos[0] = new Metodo1;
    metodos[1] = new Metodo2;
    cout<< "Ingrese los 4 valores de la clave: "<<endl;
    for(int i=0;i<4;i++){
        int valor;
        cin>> valor;
        //Regustramos en cada metodo
        metodos[0]->registrarValor(valor, i);
        metodos[1]->registrarValor(valor, i);
    }

    // Cuenta cuantas pruebas de validacion supera la clave
    int pruebasSuperadas =0;
    for(int i = 0;i<2;i++){
        if(metodos[i]->esValido()){
        pruebasSuperadas++;
        }
    }
    cout << "La clave supero : " << pruebasSuperadas<< " pruebas de validacion." << endl;
    delete metodos[0];
    delete metodos[1];
    getch();
    return 0;
}
