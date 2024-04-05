#include <iostream>
#include <queue>

using namespace std;

void interLeaveQueue(queue<int>& first) {
    queue<int> second;
    int size = first.size();

    // Move the first half of elements from first to second queue
    for (int i = 0; i < (size / 2); i++) {
        int fFront = first.front();
        first.pop();
        second.push(fFront);
    }

    // Interleave the elements from second queue back into first queue
    while (!second.empty()) {
        int sFront = second.front();
        second.pop();
        first.push(sFront);

        int fFront = first.front();
        first.pop();
        first.push(fFront);
    }
}

int main() {
    queue<int> myQueue;

    // Enqueue elements to the queue
    for (int i = 1; i <= 10; i++) {
        myQueue.push(i);
    }

    cout << "Original Queue: ";
    queue<int> tempQueue = myQueue;  // Create a copy of the original queue to print later
    while (!tempQueue.empty()) {
        cout << tempQueue.front() << " ";
        tempQueue.pop();
    }
    cout << endl;

    // Interleave the first and second halves of the queue
    interLeaveQueue(myQueue);

    cout << "Queue after interleaving: ";
    while (!myQueue.empty()) {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }
    cout << endl;

    return 0;
}
