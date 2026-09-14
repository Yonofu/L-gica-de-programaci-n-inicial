#include <iostream>
using namespace std;

int main() {
    int Y = 4;
    int X = 4;

    Y = ++X;

    // Se usan pasos separados para evitar una expresión
    // con modificaciones múltiples de X.
    int anteriorX = X;
    X++;
    Y++;
    X = anteriorX + Y;

    cout << X << " " << Y;

    return 0;
}
