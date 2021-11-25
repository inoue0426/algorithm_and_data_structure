#include <iostream>
#include <vector>
using namespace std;
const int INF = 1000000000;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int min_value = INF;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i] + b[j] < m) continue;
            if (a[i] + b[j] < min_value) min_value = a[i] + b[j];
        }
    }
    cout << min_value << endl;
}