#include <iostream>
using namespace std;

int GCD(int a, int b) {
    if (b == 0) return a;
    return GCD(b, a % b);
}

int main() {
    cout << GCD(51, 15) << endl;
    cout << GCD(15, 51) << endl;
}