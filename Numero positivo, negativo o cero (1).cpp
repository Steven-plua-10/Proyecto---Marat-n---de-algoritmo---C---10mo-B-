#include <iostream>
using namespace std;

int main() {
    cout << "=== Positivo, negativo o cero ===" << endl;
    double numero;
    cout << "Ingresa un numero: ";
    cin >> numero;
    if (numero > 0)
        cout << "El numero es positivo." << endl;
    else if (numero < 0)
        cout << "El numero es negativo." << endl;
    else
        cout << "El numero es cero." << endl;
    return 0;
}
