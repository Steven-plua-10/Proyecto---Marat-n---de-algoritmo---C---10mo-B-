#include <iostream>
using namespace std;

int main() {
    cout << "=== Mayor de dos numeros ===" << endl;
    double a, b;
    cout << "Ingresa el primer numero: ";
    cin >> a;
    cout << "Ingresa el segundo numero: ";
    cin >> b;
    if (a > b)
        cout << a << " es mayor que " << b << endl;
    else if (b > a)
        cout << b << " es mayor que " << a << endl;
    else
        cout << "Ambos numeros son iguales." << endl;
    return 0;
}
