#include <iostream>
using namespace std;

int main()
{
    int edad;
    bool vip;

    cin >> edad >> vip;

    bool ingreso = (edad >= 18) || vip;

    cout << ingreso;

    return 0;
}
