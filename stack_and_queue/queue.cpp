#include <iostream>
#include <vector>
using namespace std;
const int MAX = 100000;

int qu[MAX];
int tail = 0, head = 0;

void init() {
    tail = 0;
    head = 0;
}

bool isEmpty() {
    return tail == head;
}

bool isFull() {
    return (head == (tail + 1) % MAX);
}

void enqueue(int x){
    if (isFull()) {
        cout << "Queue is full" << endl;
        return;
    }
    qu[tail] = x;
    ++tail;
    if (tail == MAX) tail = 0;
}

int dequeue(){
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return -1;
    }
    int x = qu[head];
    ++head;
    if (head == MAX) head = 0;
    return x;
}

int main(){
    init();
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(5);
    enqueue(7);

    cout << dequeue() << endl;
    cout << dequeue() << endl;

    enqueue(11);
}