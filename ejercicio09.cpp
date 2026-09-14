#include <iostream>
using namespace std;

int main() {
    int X = 5;
    int Y;

    // Se separan las operaciones para evitar modificaciones
    // múltiples de X dentro de una misma expresión.
    int temp1 = ++X;
    int temp2 = X--;
    Y = temp1 * temp2;

    cout << X << " " << Y;

    return 0;
}
