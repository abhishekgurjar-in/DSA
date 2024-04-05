#include<iostream>
using namespace std;

class Queue {
public:
    int* arr;
    int size;
    int front;
    int rear;

    Queue(int size) {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    ~Queue() {
        delete[] arr;
    }

    void push(int val) {
        if (rear == size - 1) {
            cout << "Overflow Queue" << endl;
            return;
        } else if (front == -1 && rear == -1) {
            front++;
            rear++;
            arr[rear] = val;
        } else {
            rear++;
            arr[rear] = val;
        }
    }

    void pop() {
        if (front == -1 && rear == -1) {
            cout << "Underflow Queue" << endl;
            return;
        } else if (front == rear) {
            arr[front] = -1;
            front = -1;
            rear = -1;
        } else {
            arr[front] = -1;
            front++;
        }
    }

    int getSize() {
        if (front == -1 && rear == -1) {
            return 0;
        } else {
            return (rear - front + 1);
        }
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    int getFront() {
        if (front == -1) {
            return -1;
        } else {
            return arr[front];
        }
    }

    int getRear() {
        if (rear == -1) {
            return -1;
        } else {
            return arr[rear];
        }
    }
};
int main() {
    Queue myQueue(5);
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    cout << "Front element: " << myQueue.getFront() << endl;
    cout << "Rear element: " << myQueue.getRear() << endl;
    myQueue.pop();
    cout << "Front element after pop: " << myQueue.getFront() << endl;
    cout << "Size of queue: " << myQueue.getSize() << endl;
    cout << "Is queue empty? " << (myQueue.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}