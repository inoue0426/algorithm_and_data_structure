#include <iostream>
#include <vector>
using namespace std;

template<class T> void chmax(T& a, T b) {
    if ( a < b ){
        a = b;
    }
}

int main(){
    int N; long long W;
    cin >> N >> W;
    vector<long long> weight(N), value(N);
    for (int i = 0; i < N; i++) {
        cin >> weight[i] >> value[i];
    }

    vector<vector<long long> > dp(N+1, vector<long long>(W+1, 0));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= W; j++) {
            if (W - weight[i] >= 0) {
                chmax(dp[i+1][j], dp[i][j-weight[i]] + value[i]);
            }

            chmax(dp[i+1][j], dp[i][j]);
        }
    }
    cout << dp[N][W] << endl;
}