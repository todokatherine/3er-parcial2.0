#include<iostream>
using namespace std;

int main() {
    int numero;
    int mayor = -2147483647; 
    int menor = 2147483647; 
    int suma = 0;
    int i = 1;

    while (i <= 10) {
        cout << "Ingresa el numero: ";
        cin >> numero;

        if (numero < menor) {
            menor = numero;
        }
        if (numero > mayor) {
            mayor = numero;
        }
        suma += numero;
        i++;
    }

    cout << "El numero mayor es " << mayor << endl;
    cout << "El numero menor es " << menor << endl;
    cout << "La suma de los numeros es " << suma << endl;

    return 0;
}
