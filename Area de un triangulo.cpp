#include <iostream>
using namespace std;

int main() {
    cout << "=== Area de un triangulo ===" << endl;
    double base, altura;
    cout << "Ingresa la base: ";
    cin >> base;
    cout << "Ingresa la altura: ";
    cin >> altura;
    double area = (base * altura) / 2;
    cout << "El area del triangulo es: " << area << endl;
    return 0;
}
