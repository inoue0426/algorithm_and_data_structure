#include <iostream>
using namespace std;

int main(){
    int left = 20, right = 36;

    while (right - left > 1){
        int mid = (right + left) / 2;
        cout << "Is the age less than " << mid << "?  (yes / no)" << endl;
        string ans;
        cin >> ans;

        if (ans == "yes"){
            right = mid;
        }
        else{
            left = mid;
        }
    }
    cout << "The age is " << left << endl;
}