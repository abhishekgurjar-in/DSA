#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int size;
    int top;

public:
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }

    void push(int data)
    {
        if (top == size - 1)
        {
            cout << "Stack is Overflow" << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = data;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is Underflow" << endl;
            return;
        }
        else
        {
            top--;
        }
    }

    bool isEmpty()
    {
        return (top == -1);
    }

    int getTop()
    {
        if (top == -1)
        {
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    int getSize()
    {
        return top + 1;
    }

    void print()
    {
        cout << "Top : " << top << endl;
        cout << "Top Element : " << getTop() << endl;
        cout << "Size of the Stack : " << getSize() << endl;
        if (isEmpty())
        {
            cout << "Empty Stack" << endl;
        }
        else
        {
            cout << "Non-Empty Stack" << endl;
        }
        cout << "Stack : [ ";
        for (int i = 0; i < getSize(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << "]" << endl;
    }

    ~Stack()
    {
        delete[] arr;
    }
};

int main()
{
    Stack st(8);

    // Insertion
    st.push(10);
    st.print();

    st.push(20);
    st.print();

    // Deletion
    st.pop();
    st.print();

    st.pop();
    st.print();

    return 0;
}
