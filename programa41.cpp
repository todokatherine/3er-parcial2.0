#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];

    matriz[0][0] = 10; 
    matriz[0][1] = 20;
    matriz[1][0] = 30;
    matriz[1][1] = 40;

    cout << "Datos específicos:" << endl;
    cout << "Fila 1, columna 1: " << matriz[0][0] << endl; // Acceso a la fila 1, columna 1 (índices 0,0)
    cout << "Fila 1, columna 2: " << matriz[0][1] << endl; // Acceso a la fila 1, columna 2 (índices 0,1)
    cout << "Fila 2, columna 1: " << matriz[1][0] << endl; // Acceso a la fila 2, columna 1 (índices 1,0)
    cout << "Fila 2, columna 2: " << matriz[1][1] << endl; // Acceso a la fila 2, columna 2 (índices 1,1)

    return 0;
}
