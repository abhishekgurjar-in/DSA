#include <iostream>
using namespace std;

class CDQueue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    CDQueue(int size)
    {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void pushFront(int val)
    {
        if ((front == 0 && rear == size - 1) || (rear == front - 1))
        {
            cout << "Overflow queue " << endl;
            return;
        }
        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[front] = val;
        }
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;
            arr[front] = val;
        }
        else
        {
            front--;
            arr[front] = val;
        }
    }

    void popFront()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Underflow Queue" << endl;
            return;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if (front == size - 1)
        {
            arr[front] = -1;
            front = 0;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
    }

    void pushBack(int val)
    {
        if ((front == 0 && rear == size - 1) || (rear == front - 1))
        {
            cout << "Overflow Queue" << endl;
            return;
        }
        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[rear] = val;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = val;
        }
        else
        {
            rear++;
            arr[rear] = val;
        }
    }

    void popBack()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Underflow Queue" << endl;
            return;
        }
        else if (front == rear)
        {
            arr[rear] = -1;
            front = -1;
            rear = -1;
        }
        else if (rear == 0)
        {
            arr[rear] = -1;
            rear = size - 1;
        }
        else
        {
            arr[rear] = -1;
            rear--;
        }
    }

    ~CDQueue()
    {
        delete[] arr;
    }
};

int main()
{
    CDQueue deque(5);
    deque.pushBack(1);
    deque.pushFront(2);
    deque.pushFront(3);
    deque.pushBack(4);
    deque.popFront();
    deque.popBack();
    deque.popFront();
    deque.popBack();
    deque.popFront(); // This will cause underflow
    return 0;
}
