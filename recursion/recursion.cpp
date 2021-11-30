#include <iostream>
using namespace std;

int func(int N) {
    cout << "call func("<< N <<")" << endl;
    if (N == 0) return 0;

    int result = N + func(N-1);
    cout << N << " times summation " << result << endl;

    return result;
}

int main() {
    func(5);
}