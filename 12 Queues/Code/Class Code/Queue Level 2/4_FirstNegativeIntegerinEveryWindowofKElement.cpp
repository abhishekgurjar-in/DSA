#include<iostream>
#include<deque>
using namespace std;

void printFirstNegative(int *arr, int size, int k) {
    deque<int> dq;
    int index;

    // Process the first window of size k
    for (index = 0; index < k; index++) {
        int element = arr[index];
        if (element < 0) {
            dq.push_back(index);
        }
    }

    // Print the first negative element in the first window
    if (dq.empty()) {
        cout << "0 ";
    } else {
        cout << arr[dq.front()] << " ";
    }

    // Process subsequent windows
    for (; index < size; index++) {
        // Remove elements that are outside the current window
        if (!dq.empty() && index - dq.front() >= k) {
            dq.pop_front();
        }

        // Add the current element to the deque if it is negative
        if (arr[index] < 0) {
            dq.push_back(index);
        }

        // Print the first negative element in the current window
        if (dq.empty()) {
            cout << "0 ";
        } else {
            cout << arr[dq.front()] << " ";
        }
    }
}

int main() {
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    cout << "First negative elements in every window of size " << k << ": ";
    printFirstNegative(arr, size, k);
    cout << endl;

    return 0;
}
