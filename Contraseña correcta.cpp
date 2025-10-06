#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "=== Verificacion de contrasena ===" << endl;
    string clave_correcta = "python123";
    string clave_ingresada;
    cout << "Introduce la contrasena: ";
    cin >> clave_ingresada;
    if (clave_ingresada == clave_correcta)
        cout << "Contrasena correcta. Bienvenido." << endl;
    else
        cout << "Contrasena incorrecta. Acceso denegado." << endl;
    return 0;
}
