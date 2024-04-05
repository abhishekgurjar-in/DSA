#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseQueue(queue<int>& q){
    stack<int> st;
    while (!q.empty()){
        int frontElement = q.front();
        q.pop();
        st.push(frontElement);
    }
    while (!st.empty()){
        int topElement = st.top();
        st.pop();
        q.push(topElement);
    }
}

int main() {
    queue<int> myQueue;
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    cout << "Original Queue: ";
    while (!myQueue.empty()) {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }
    cout << endl;

    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);
    reverseQueue(myQueue);

    cout << "Reversed Queue: ";
    while (!myQueue.empty()) {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }
    cout << endl;

    return 0;
}



// //Using Recursion

// #include <iostream>
// #include <queue>

// using namespace std;

// void reverseQueueRE(queue<int>& q) {
//     if (q.empty()) return;

//     int temp = q.front();
//     q.pop();
//     reverseQueueRE(q);
//     q.push(temp);
// }

// int main() {
//     queue<int> myQueue;

//     // Enqueue elements to the queue
//     myQueue.push(10);
//     myQueue.push(20);
//     myQueue.push(30);
//     myQueue.push(40);

//     cout << "Original Queue: ";
//     queue<int> tempQueue = myQueue;  // Create a copy of the original queue to print later
//     while (!tempQueue.empty()) {
//         cout << tempQueue.front() << " ";
//         tempQueue.pop();
//     }
//     cout << endl;

//     // Reversing the queue
//     reverseQueueRE(myQueue);

//     cout << "Reversed Queue: ";
//     while (!myQueue.empty()) {
//         cout << myQueue.front() << " ";
//         myQueue.pop();
//     }
//     cout << endl;

//     return 0;
// }
