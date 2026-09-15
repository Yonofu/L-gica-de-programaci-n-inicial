#include <iostream>
using namespace std;

int main() {
    int x = 4;
    int y = ++x;
    x = x++ + ++y;
    cout << x << " " << y;
    return 0;
}

