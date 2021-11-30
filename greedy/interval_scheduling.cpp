#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

using Interval = pair<int, int>;

bool cmp(const Interval& a, const Interval& b) {
    return a.second < b.second;
}

int main(){
    int N;
    cin >> N;

    vector<Interval> intervals(N);
    for (int i = 0; i < N; ++i)
        cin >> intervals[i].first >> intervals[i].second;

    sort(intervals.begin(), intervals.end(), cmp);
    int res = 0;
    int current_end_time = 0;

    for (int i = 0; i < N; ++i) {
        if (intervals[i].first < current_end_time) continue;

        res++;
        current_end_time = intervals[i].second;
    }
    cout << res << endl;
}