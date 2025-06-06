#include <iostream>

using namespace std;

int main()
{

    float a, b, c, d, e, f, resultado = 0;

    cout << "Ingresa el valor de a: ";
    cin >> a;
    cout << "Ingresa el valor de b: ";
    cin >> b;
    cout << "Ingresa el valor de c: ";
    cin >> c;
    cout << "Ingresa el valor de d: ";
    cin >> d;
    cout << "Ingresa el valor de e: ";
    cin >> e;
    cout << "Ingresa el valor de f: ";
    cin >> f;

    resultado = (a + (b / c)) / (d + (e / f));

    cout << "El resultado es: " << resultado;

    return 0;
}