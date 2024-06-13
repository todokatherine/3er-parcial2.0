#include<iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Digite el número de posiciones: ";
    cin >> n;

    string personas[n]; 

    for(int i = 0; i < n; i++) {
        cout << "Digite un nombre para la posición " << i + 1 << ": ";
        cin >> personas[i];
    }

    for(int i = 0; i < n; i++) {
        cout << "El dato en la posición " << i + 1 << " es " << personas[i] << endl;
    }

    return 0;
}
