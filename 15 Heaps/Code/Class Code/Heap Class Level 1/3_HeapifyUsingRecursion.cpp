#include <iostream>
using namespace std;

void heapify(int *arr, int size, int index) {
    int leftIndex = 2 * index;
    int rightIndex = 2 * index + 1;
    int largestIndex = index;

    if (leftIndex <= size && arr[largestIndex] < arr[leftIndex]) {
        largestIndex = leftIndex;
    }
    if (rightIndex <= size && arr[largestIndex] < arr[rightIndex]) {
        largestIndex = rightIndex;
    }
    if (index != largestIndex) {
        swap(arr[largestIndex], arr[index]);
        heapify(arr, size, largestIndex); // Recursively heapify the subtree
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

    // Heapify the array
    for (int i = size / 2; i >= 1; i--) {
        heapify(arr, size, i);
    }

    cout << "Array after heapifying:" << endl;
    for (int i = 1; i <= size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
