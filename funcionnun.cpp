#include <iostream>
using namespace std;

int encontrarMax (int x, int y);

int main (){
    int n1, n2;
    int mayor;

    cout << "Digite un numero "<< endl;
    cin >> n1;

    cout << "Digite un numero "<< endl;
    cin >> n2;

    mayor =  encontrarMax (n1, n2);

    cout << "El mayor de los dos numeros es: "<< mayor <<endl; 
    
    return 0; 
}
//Definicion de funciones
int encontrarMax (int x, int y){
    int numMax;

    if (x  > y)
    {
        numMax = x;
    } else {
        numMax = y;
    }
    return numMax;
}
