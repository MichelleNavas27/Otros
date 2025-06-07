#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    float x,y, result = 0;

    cout << "Digite el valor de x: : " << endl;
    cin >> x;

    cout << "Digite el valor de y: " << endl;
    cin >> y;

    result = (sqrt(x)) / (pow(y, 2)-1);

    cout << "El resultado es: " << result << endl;

    return 0;
}