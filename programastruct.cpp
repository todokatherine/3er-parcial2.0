#include <iostream>
#include <string>

using namespace std;


struct Persona {
    string nombre;
    int edad;
    string direccion;
};

int main() {
    Persona personas[100]; 
    int cantidadPersonas = 0; 

    int opcion;

    do {
   
        cout << "\n----- Menu -----" << endl;
        cout << "1. Agregar persona" << endl;
        cout << "2. Mostrar personas" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese la opción deseada: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
              
                if (cantidadPersonas < 100) {
                    cout << "Ingrese el nombre: ";
                    cin >> personas[cantidadPersonas].nombre;
                    cout << "Ingrese la edad: ";
                    cin >> personas[cantidadPersonas].edad;
                    cout << "Ingrese la dirección: ";
                    cin.ignore(); 
                    getline(cin, personas[cantidadPersonas].direccion);
                    cantidadPersonas++;
                    cout << "Persona agregada correctamente." << endl;
                } else {
                    cout << "No se pueden agregar más personas. Arreglo lleno." << endl;
                }
                break;
            }
            case 2: {
                
                if (cantidadPersonas > 0) {
                    cout << "Listado de personas:" << endl;
                    for (int i = 0; i < cantidadPersonas; ++i) {
                        cout << "Persona " << i + 1 << ":" << endl;
                        cout << "Nombre: " << personas[i].nombre << endl;
                        cout << "Edad: " << personas[i].edad << endl;
                        cout << "Dirección: " << personas[i].direccion << endl;
                        cout << endl;
                    }
                } else {
                    cout << "No hay personas registradas." << endl;
                }
                break;
            }
            case 3:
               
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción inválida. Intente de nuevo." << endl;
        }
    } while (opcion != 3);

    return 0;
}
