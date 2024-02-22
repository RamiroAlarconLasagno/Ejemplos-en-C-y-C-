#include <iostream>
#include <string>

using namespace std;

int main() {
    // Constructores
    string s1; // Constructor por defectos
    cout <<s1 <<endl;
    string s2("Hello, world!"); // Constructor que toma una const char*
    cout <<s2 <<endl;
    string s3(s2); // Constructor de copia
    cout <<s3 <<endl;
    string s4(s2, 0, 5); // Constructor de subcadena
    cout <<s4 <<endl;

    // Asignación y acceso
    s1 = "New value"; // Operador de asignación
    cout << s2[1] << endl; // Salida: e
    cout << s3.at(1) << endl; // Salida: e
    cout << s4.front() << " - " << s4.back() << endl; // Salida: H - o

    // Modificación
    s1.append(" appended"); // Método append(), s1 es ahora "New value appended"
    cout << s1 << endl; // Salida: New value appended
    s2.insert(5, " inserted"); // Método insert(), s2 es ahora "Hello inserted, world!"
    cout << s2 << endl; // Salida: Hello inserted, world!
    s3.erase(0, 6); // Método erase(), s3 es ahora ", world!"
    cout << s3 << endl; // Salida: , world!
    s4.replace(0, 1, "h"); // Método replace(), s4 es ahora "hello"
    cout << s4 << endl; // Salida: hello
    s1.push_back('!'); // Método push_back(), s1 es ahora "New value appended!"
    cout << s1 << endl; // Salida: New value appended!
    s2.pop_back(); // Método pop_back(), s2 es ahora "Hello inserted, world"
    cout << s2 << endl; // Salida: Hello inserted, world

    // Capacidad
    cout << s1.size() << " - " << s1.length() << endl; // Salida: 21 - 21
    cout << boolalpha << s1.empty() << endl; // Salida: false
    s2.resize(5); // Método resize(), s2 es ahora "Hello"
    cout << s2 << endl; // Salida: Hello
    cout << s2.capacity() << endl; // La salida depende de la implementación
    s2.shrink_to_fit(); // Método shrink_to_fit()

    // Búsqueda y comparación
    size_t pos = s1.find("value"); // Método find()
    cout << "Position of 'value': " << pos << endl; // Salida: 4
    size_t rpos = s1.rfind('e'); // Método rfind()
    cout << "Last position of 'e': " << rpos << endl; // Salida: 11
    cout << s1.compare(s3) << endl; // Método compare(), la salida depende de las cadenas

    // Subcadenas
    string sub = s1.substr(4, 5); // Método substr()
    cout << "Substring: " << sub << endl; // Salida: value

    // Manipulación de caracteres
    const char* cstr = s1.c_str(); // Método c_str()
    cout << "C-String: " << cstr << endl; // Salida: New value appended!
    const char* data = s1.data(); // Método data()
    cout << "Data: " << data[0] << endl; // Salida: N

    // Entrada/Salida
    cout << "Enter a new string: ";
    getline(cin, s1); // Función getline() para entrada
    cout << "You entered: " << s1 << endl;

    return 0;
}
