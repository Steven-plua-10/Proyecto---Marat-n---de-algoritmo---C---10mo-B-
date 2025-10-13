#include <iostream>
using namespace std;

int main() {
    int anioNacimiento, anioActual;
    cout << "Año de nacimiento: ";
    cin >> anioNacimiento;
    cout << "Año actual: ";
    cin >> anioActual;
    cout << "Tu edad es: " << anioActual - anioNacimiento << " años" << endl;
    return 0;
}

