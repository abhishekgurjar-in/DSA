#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void reverseKEQueue(queue<int>& q, int k) {
    stack<int> st;
    int N = q.size();

    // Push the first k elements into the stack
    for (int i = 0; i < k; i++) {
        int frontElement = q.front();
        q.pop();
        st.push(frontElement);
    }

    // Push the elements back to the queue after reversing them in the stack
    for (int i = k; i < N; i++) {
        int topElement = st.top();
        st.pop();
        q.push(topElement);
    }

    // Move the remaining elements to the end of the queue
    for (int i = 0; i < (N - k); i++) {
        int frontElement = q.front();
        q.pop();
        q.push(frontElement);
    }
}

int main() {
    queue<int> myQueue;

    // Enqueue elements to the queue
    for (int i = 1; i <= 10; i++) {
        myQueue.push(i);
    }

    int k = 5;
    cout << "Original Queue: ";
    queue<int> tempQueue = myQueue;  // Create a copy of the original queue to print later
    while (!tempQueue.empty()) {
        cout << tempQueue.front() << " ";
        tempQueue.pop();
    }
    cout << endl;

    // Reverse the first k elements in the queue
    reverseKEQueue(myQueue, k);

    cout << "Queue after reversing first " << k << " elements: ";
    while (!myQueue.empty()) {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }
    cout << endl;

    return 0;
}
