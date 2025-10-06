#include <iostream>
using namespace std;

int main() {
    cout << "=== Calculo del promedio de 3 notas ===" << endl;
    double n1, n2, n3;
    cout << "Ingresa la primera nota: ";
    cin >> n1;
    cout << "Ingresa la segunda nota: ";
    cin >> n2;
    cout << "Ingresa la tercera nota: ";
    cin >> n3;
    double promedio = (n1 + n2 + n3) / 3.0;
    cout << "El promedio es: " << promedio << endl;
    if (promedio >= 6.0)
        cout << "¡Aprobado!" << endl;
    else
        cout << "Reprobado." << endl;
    return 0;
}
