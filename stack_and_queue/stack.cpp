#include <iostream>
# include <vector>
using namespace std;
const int MAX = 100000;

int st[MAX];
int top = 0; // stack top

void init() {
    top = 0;
}

bool isEmpty() {
    return top == 0;
}

bool isFull() {
    return top == MAX;
}

void push(int x){
    if(isFull()) return;
    st[top] = x;
    ++top;
}

int pop(){
    if(isEmpty()) return -1;
    --top;
    return st[top];
}

int main(){
    init();

    push(1);
    push(3);
    push(5);
    push(7);

    cout << pop() << endl;
    cout << pop() << endl;
    push(9);
}