#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream archivo("datos.txt");
    string linea;
    string busqueda = "Ana"; // Lo que queremos encontrar
    bool encontrado = false;

    if (archivo.is_open()) {
        while (getline(archivo, linea)) {
            // Si la línea contiene la palabra "Ana"
            if (linea.find(busqueda) != string::npos) {
                cout << "Encontrado: " << linea << endl;
                encontrado = true;
            }
        }
        archivo.close();

        if (!encontrado) {
            cout << "No se encontró '" << busqueda << "' en el archivo.\n";
        }
    } else {
        cout << "No se pudo abrir el archivo.\n";
    }

    return 0;
}