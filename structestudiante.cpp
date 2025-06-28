#include <iostream>
#include <vector>
using namespace std;

struct Estudiante  // Estructura para almacenar datos del estudiante
{
    // declaracion de variables
    //variables de datos personales
    string nombre;
    string apellido;
    string carnet; 
    //Variables para notas
    vector<float> notas;
    float promedio;

};


int main() {
    struct Estudiante estudiante; // Instancia de la estructura Estudiante
    // Declaración de variables 
    int continuar; //variable a usar para el while
    float nota; // Variable para almacenar cada nota
    float suma = 0.0; // Variable para la suma de las notas
    estudiante.notas .resize(9); // Instancia de la estructura Estudiante

    do {

        // Ingreso de datos personales
        cout << "Ingrese su nombre: ";
        cin >> estudiante.nombre;
        cin.ignore(); // Limpiar el buffer de entrada

        cout << "Ingrese su apellido: ";
        cin >> estudiante.apellido;
        cin.ignore(); // Limpiar el buffer de entrada

        // Validación del carnet (exactamente 8 caracteres)
        do {
            cout << "Ingrese su carnet (8 caracteres): ";
            cin >> estudiante.carnet;

            if (estudiante.carnet.length() != 8) {
                cout << "Carnet inválido. Debe tener exactamente 8 caracteres.\n";
            }
        } while (estudiante.carnet.length() != 8);
        cin.ignore(); // Limpiar el salto de línea

        // Captura de 9 notas con validación entre 0.0 y 10.0
        for (int i = 0; i < 9; i++) {
            do {
                cout << "Ingrese la nota " << (i + 1) << " (0.0 a 10.0): ";
                cin >> nota;

                if (nota < 0.0 || nota > 10.0) {
                    cout << "Nota fuera de rango. Intente nuevamente.\n";
                } else {
                    estudiante.notas[i] = nota;
                    suma += nota;
                }
            } while (nota < 0.0 || nota > 10.0);
        }

        // Cálculo y salida del promedio
        estudiante.promedio = suma / estudiante.notas.size();

        cout << "\n--- RESULTADO ---\n";
        cout << "Nombre completo: " << estudiante.nombre << " " << estudiante.apellido << endl;
        cout << "Carnet: " << estudiante.carnet << endl;
        cout << "Promedio de notas: " << estudiante.promedio << endl;

        // Opción para repetir o salir
        cout << "\nPara salir presione 1, para continuar presione otro numero: ";
        cin >> continuar;
        cin.ignore(); // Limpiar buffer

        cout << endl;

    } while (continuar != 1);

    return 0;
}