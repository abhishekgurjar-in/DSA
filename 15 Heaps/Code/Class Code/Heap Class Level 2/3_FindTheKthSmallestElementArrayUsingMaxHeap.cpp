#include <iostream>
#include <queue>
using namespace std;

int getKthSmallestElement(int arr[], int n, int k) {
    priority_queue<int> pq;
    for (int i = 0; i < k; i++) {
        int element = arr[i];
        pq.push(element);
    }
    for (int i = k; i < n; i++) {
        int element = arr[i];
        if (pq.top() > element) {
            pq.pop();
            pq.push(element);
        }
    }
    return pq.top();
}

int main() {
    int arr[] = { 7, 10, 4, 3, 20, 15 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int kth_smallest = getKthSmallestElement(arr, n, k);
    cout << "The " << k << "th smallest element is: " << kth_smallest << endl;
    return 0;
}
