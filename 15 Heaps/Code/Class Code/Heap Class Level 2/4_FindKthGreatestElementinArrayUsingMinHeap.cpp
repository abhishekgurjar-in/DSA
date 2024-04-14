#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int getKthGreatestElement(int arr[], int n, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < k; i++) {
        pq.push(arr[i]);
    }
    for (int i = k; i < n; i++) {
        int element = arr[i];
        if (pq.top() < element) {
            pq.pop();
            pq.push(element);
        }
    }
    int ans = pq.top();
    return ans;
}

int main() {
    int arr[] = { 7, 10, 4, 3, 20, 15 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int kth_greatest = getKthGreatestElement(arr, n, k);
    cout << "The " << k << "th greatest element is: " << kth_greatest << endl;
    return 0;
}
