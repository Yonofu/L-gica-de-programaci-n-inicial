#include <iostream>
using namespace std;

int main() {
    int X = 8;
    int Y = 2;

    X += Y * 3;
    Y = X - Y;

    cout << X << " " << Y;

    return 0;
}
