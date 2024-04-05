#include<iostream>
using namespace std;

class CQueue{
    public:
    int* arr;
    int size;
    int front;
    int rear;

    CQueue(int size){
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int val){
        if((front == 0 && rear == size - 1) || (front == rear + 1)){
            cout << "Overflow Queue" << endl;
            return;
        }
        else{
            if(front == -1 && rear == -1){
                front = 0;
                rear = 0;
                arr[rear] = val;
            }
            else if (rear == size - 1 && front != 0){
                rear = 0;
                arr[rear] = val;
            }
            else{
                rear++;
                arr[rear] = val;
            }
        }
    }

    void pop(){
        if(front == -1 && rear == -1){
            cout << "Underflow Queue" << endl;
            return;
        }
        else{
            cout << "Element popped: " << arr[front] << endl;
            if(front == rear){
                front = -1;
                rear = -1;
            }
            else if(front == size - 1){
                front = 0;
            }
            else{
                front++;
            }
        }
    }

    void display(){
        if(front == -1 && rear == -1){
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        int i = front;
        if(front <= rear){
            while(i <= rear){
                cout << arr[i] << " ";
                i++;
            }
        }
        else{
            while(i < size){
                cout << arr[i] << " ";
                i++;
            }
            i = 0;
            while(i <= rear){
                cout << arr[i] << " ";
                i++;
            }
        }
        cout << endl;
    }

    ~CQueue(){
        delete[] arr;
    }
};

int main(){
    CQueue queue(5);
    queue.push(1);
    queue.push(2);
    queue.push(3);
    queue.display();
    queue.pop();
    queue.display();
    queue.push(4);
    queue.push(5);
    queue.push(6); // This will cause overflow
    queue.pop();
    queue.pop();
    queue.pop();
    queue.pop(); // This will cause underflow
    return 0;
}
