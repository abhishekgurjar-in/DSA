#include <iostream>
using namespace std;

void heapify(int *arr, int n, int index) {
    int leftIndex = 2 * index;
    int rightIndex = 2 * index + 1;
    int largestIndex = index;

    if (leftIndex <= n && arr[largestIndex] < arr[leftIndex]) {
        largestIndex = leftIndex;
    }
    if (rightIndex <= n && arr[largestIndex] < arr[rightIndex]) {
        largestIndex = rightIndex;
    }
    if (index != largestIndex) {
        swap(arr[largestIndex], arr[index]);
        heapify(arr, n, largestIndex); // Recursively heapify the subtree
    }
}

void buildHeap(int *arr, int n) {
    for (int index = n / 2; index >= 1; index--) {
        heapify(arr, n, index);
    }
}

int main() {
    int arr[] = {0, 3, 7, 2, 5, 8};
    int size = sizeof(arr) / sizeof(arr[0]) - 1; // Exclude the first element (0)

    cout << "Original array:" << endl;
    for (int i = 1; i <= size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Build heap from the array
    buildHeap(arr, size);

    cout << "Array after converting to heap:" << endl;
    for (int i = 1; i <= size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
