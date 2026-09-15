#include <iostream>
using namespace std;

int main()
{
    int N, M, A;
    cin >> N >> M >> A;

    if (N != M && M != A && N != A) {
        cout << "ELLA NO TE AMA";
    } else {
        cout << "ELLA TE AMA";
    }

    return 0;
}
