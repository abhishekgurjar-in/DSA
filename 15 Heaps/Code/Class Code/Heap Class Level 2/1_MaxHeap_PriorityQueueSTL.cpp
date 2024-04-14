#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> maxPQ;

    maxPQ.push(10);
    maxPQ.push(20);
    maxPQ.push(30);
    maxPQ.push(40);
    maxPQ.push(50);

    cout << "Top (Root) element of Max Heap: " << maxPQ.top() << endl;
    cout << "Size of Max Heap: " << maxPQ.size() << endl;
    cout << "Max Heap is empty or not: " << (maxPQ.empty() ? "Empty" : "Not empty") << endl;

    maxPQ.pop();
    cout << "Size of Max Heap after pop operation: " << maxPQ.size() << endl;

    return 0;
}
