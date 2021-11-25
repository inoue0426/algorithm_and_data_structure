#include <iostream>
#include <vector>
using namespace std;

vector<long long> memo;

long long fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (memo[n] != -1) return memo[n];
    return memo[n] = fibo(n-1) + fibo(n-2);
}

int main() {
    memo.assign(50, -1);
    fibo(49);

    for (int i = 0; i < 50; i++) {
        cout << i << endl;
        cout << memo[i] << endl;
    }
}