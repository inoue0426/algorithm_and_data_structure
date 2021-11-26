#include <iostream>
#include <vector>
using namespace std;

const int N = 8;
const vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8};

int binary_search(int key){
    int left = 0, right = a.size() - 1;
    while (right >= left){
        int mid = (left + right) / 2;
        if (a[mid] == key) return mid;
        else if (a[mid] > key) right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}

int main(){
    cout << binary_search(3) << endl;
    cout << binary_search(12) << endl;
    cout << binary_search(25) << endl;

    cout << binary_search(2) << endl;
    cout << binary_search(13) << endl;
    cout << binary_search(-100) << endl;
}