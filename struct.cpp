#include <iostream>
using namespace std;

struct coleccionCD
{
    char titulo[30] ;
    char artista[25] ;
    int numcanciones;
} CD1;

int main(){

 cout << "Digite el titulo del CD: ";
 cin.getline(CD1.titulo, 30, '\n');
 cout << "Digite el artista del CD: ";
 cin.getline(CD1.artista, 25, '\n');
cout << "Digite el numero de canciones del CD: ";
 cin >> CD1.numcanciones;


 cout << "\n Imprimiendo datos: \n ";
 cout << "TITULO: " <<CD1.titulo << endl;
 cout << "ARTISTA: " <<CD1.artista << endl;
 cout << "NUMERO DE CANCIONES: " <<CD1.numcanciones << endl;
return 0;
}
