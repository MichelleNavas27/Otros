#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    float cat1 = 0, cat2 = 0, hipotenusa = 0;

    cout << "Ingresa el cateto 1: " << endl;
    cin >> cat1;

    cout << "Ingresa el cateto 2: " << endl;
    cin >> cat2;

    hipotenusa = sqrt(pow(cat1, 2) + pow(cat2, 2));

    cout << "La hipotenusa es " << hipotenusa << endl;

    return 0;
}