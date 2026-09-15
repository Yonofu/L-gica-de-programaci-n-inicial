#include <iostream>
using namespace std;

int main()
{
    long long A, B;
    cin >> A >> B;

    if (A > B) {
        cout << "El negocio si va a jalar" << endl;
        cout << A - B;
    } else {
        cout << "Dejalo ya esta muerto" << endl;
        cout << B - A;
    }

    return 0;
}
