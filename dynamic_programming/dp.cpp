#include <iostream>
#include <vector>
using namespace std;

bool func(int i, int j, const vector<int> &a) {
    // base case
    if (i == 0) {
        if (j  == 0){
            return true;
        }
        else return false;
    }

    // don't choose a[i-1]
    if (func(i-1, j, a)) {
        return true;
    }

    // choose a[i-1]
    if (func(i-1, j-a[i - 1], a)) {
        return true;
    }

    return false;
}

int main(){
    int n, j;
    cin >> n >> j;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {

        cin >> a[i];
    }

    if (func(n, j, a)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}