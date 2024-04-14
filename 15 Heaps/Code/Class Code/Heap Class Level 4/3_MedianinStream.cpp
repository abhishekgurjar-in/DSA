#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> findMedian(vector<int> &arr, int n) {

    // To store the medians
    vector<int> medians;

    // max heap
    priority_queue<int> lo;

    //min heap                            
    priority_queue<int, vector<int>, greater<int>> hi;

    for (int i = 0; i < n; i++) {

        int num = arr[i];

        // Add to max heap
        lo.push(num);

        // Balancing step, inserting the current element at its position (either less than or greater than median)
        hi.push(lo.top());
        lo.pop();

        // Maintain size property
        if (lo.size() < hi.size()) {
            lo.push(hi.top());
            hi.pop();
        }

        int median;

        // For odd number of elements
        if (lo.size() > hi.size()) {
            median = lo.top();
        }
        // For even number of elements
        else {
            median = (lo.top() + hi.top()) / 2;
        }

        medians.push_back(median);
    }

    return medians;
}

int main() {
    vector<int> arr = { 1, 3, 5, 7, 9 };
    int n = arr.size();

    vector<int> result = findMedian(arr, n);

    cout << "Medians: ";
    for (int median : result) {
        cout << median << " ";
    }
    cout << endl;

    return 0;
}
