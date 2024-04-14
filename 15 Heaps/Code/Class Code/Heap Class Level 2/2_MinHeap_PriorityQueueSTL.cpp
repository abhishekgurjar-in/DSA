#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<int>> minPQ;

    minPQ.push(10);
    minPQ.push(20);
    minPQ.push(30);
    minPQ.push(40);
    minPQ.push(50);

    cout << "Top (Root) element of Min Heap: " << minPQ.top() << endl;
    cout << "Size of Min Heap: " << minPQ.size() << endl;
    cout << "Min Heap is empty or not: " << (minPQ.empty() ? "Empty" : "Not empty") << endl;

    minPQ.pop();
    cout << "Size of Min Heap after pop operation: " << minPQ.size() << endl;

    return 0;
}
