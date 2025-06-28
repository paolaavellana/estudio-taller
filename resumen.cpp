// 📘 RESUMEN C++ - APLICACIÓN PRÁCTICA DE TEMAS
#include <iostream>
#include <fstream>
using namespace std;

// 1️⃣ ESTRUCTURAS
struct Persona {
    string nombre;
    int edad;
};

void mostrarPersona(const Persona &p) {
    cout << "Nombre: " << p.nombre << ", Edad: " << p.edad << endl;
}

// 2️⃣ FUNCIONES
int sumar(int a, int b) {
    return a + b;
}

void incrementar(int &x) {
    x++;
}

// 3️⃣ MANEJO DE ARCHIVOS
void escribirArchivo() {
    ofstream archivo("salida.txt");
    if (archivo.is_open()) {
        archivo << "Este es un archivo de prueba.\n";
        archivo << "Otra línea de texto.\n";
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo para escribir." << endl;
    }
}

void leerArchivo() {
    ifstream archivo("salida.txt");
    string linea;
    if (archivo.is_open()) {
        while (getline(archivo, linea)) {
            cout << linea << endl;
        }
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo para leer." << endl;
    }
}

int main() {
    // Uso de estructura
    Persona p = {"Ana", 22};
    mostrarPersona(p);

    // Uso de función
    int resultado = sumar(3, 4);
    cout << "Suma: " << resultado << endl;

    // Paso por referencia
    int numero = 10;
    incrementar(numero);
    cout << "Incrementado: " << numero << endl;

    // Escritura y lectura de archivo
    escribirArchivo();
    leerArchivo();

    return 0;
}
