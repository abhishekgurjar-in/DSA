#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;

    q.push(5);

    cout << "Size of Queue: " << q.size() << endl;

    if (q.empty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    q.pop();

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element of queue: " << q.front() << endl;
    cout << "Rear element of queue: " << q.back() << endl;

    return 0;
}
