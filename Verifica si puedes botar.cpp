#include <iostream>
using namespace std;

int main() {
    cout << "=== Verificar si puedes votar ===" << endl;
    int edad;
    cout << "Ingresa tu edad: ";
    cin >> edad;
    if (edad >= 18)
        cout << "Eres mayor de edad. Puedes votar." << endl;
    else
        cout << "Eres menor de edad. No puedes votar." << endl;
    return 0;
}
