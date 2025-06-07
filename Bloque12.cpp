#include <iostream>

using namespace std;

int main()
{

    char min;

    cout << "Ingrese una letra" << endl;
    cin >> min;

    switch (min)
    {
    case 'a':
        cout << "Es una vocal minuscula" << endl;
        break;
    case 'A':
        cout << "Es una vocal mayuscula" << endl;
        break;
    case 'e':
        cout << "Es una vocal minuscula" << endl;
        break;
    case 'E':
        cout << "Es una vocal mayuscula" << endl;
        break;
    case 'i':
        cout << "Es una vocal minuscula" << endl;
        break;
    case 'I':
        cout << "Es una vocal mayuscula" << endl;
        break;
    case 'o':
        cout << "Es una vocal minuscula" << endl;
        break;
    case 'O':
        cout << "Es una vocal mayuscula" << endl;
        break;
    case 'u':
        cout << "Es una vocal minuscula" << endl;
        break;
    case 'U':
        cout << "Es una vocal mayuscula" << endl;
        break;
        break;

    default:
        cout << "No es una vocal" << endl;
        break;
    }

    return 0;
}