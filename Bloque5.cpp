#include <iostream>

using namespace std;

int main()
{

    float nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0, promedio;

    cout << "Nota del estudiante 1" << endl;
    cin >> nota1;
    cout << "Nota del estudiante 2" << endl;
    cin >> nota2;
    cout << "Nota del estudiante 3" << endl;
    cin >> nota3;
    cout << "Nota del estudiante 4" << endl;
    cin >> nota4;

    promedio = (nota1 + nota2 + nota3 + nota4) / 4;

    cout << "La nota promedio de los estudiantes es: " << promedio << endl;

    return 0;
}