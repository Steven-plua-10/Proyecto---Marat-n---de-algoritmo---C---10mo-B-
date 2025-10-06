#include <iostream>
using namespace std;

int main() {
    cout << "=== Numero par o impar ===" << endl;
    int numero;
    cout << "Ingresa un numero entero: ";
    cin >> numero;
    if (numero % 2 == 0)
        cout << "El numero " << numero << " es par." << endl;
    else
        cout << "El numero " << numero << " es impar." << endl;
    return 0;
}
