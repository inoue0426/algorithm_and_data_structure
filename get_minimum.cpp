#include <iostream>
#include <vector>
using namespace std;
const int INF = 1e9;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }

    int min_valu = INF;
    for(int i = 0; i < N; i++){
        if(a[i] < min_valu){
            min_valu = a[i];
        }
    }

    cout << min_valu << endl;
}