#include <iostream>

using namespace std;

int main()
{

    int numero;

    cout << "Ingresa un numero: " << endl;
    cin >> numero;

    if (numero > 0)
    {
        cout << "El numero es positivo";
    }
    else if (numero < 0)
    {
        cout << "El número es negativo." << endl;
    }
    else
    {
        cout << "El número es cero" << endl;
    }

    return 0;
}