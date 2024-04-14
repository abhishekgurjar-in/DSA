#include <iostream>
using namespace std;

void heapify(int *arr, int n, int index) {
    int largestIndex = index;
    int leftIndex = 2 * index;
    int rightIndex = 2 * index + 1;

    if (leftIndex <= n && arr[largestIndex] < arr[leftIndex]) {
        largestIndex = leftIndex;
    }
    if (rightIndex <= n && arr[largestIndex] < arr[rightIndex]) {
        largestIndex = rightIndex;
    }
    if (index != largestIndex) {
        swap(arr[index], arr[largestIndex]);
        heapify(arr, n, largestIndex); // Recursively heapify the subtree
    }
}

void buildHeap(int *arr, int n) {
    for (int index = n / 2; index >= 1; index--) {
        heapify(arr, n, index);
    }
}

void heapSort(int *arr, int n) {
    buildHeap(arr, n);

    while (n != 1) {
        swap(arr[1], arr[n]);
        n--;
        heapify(arr, n, 1);
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

    heapSort(arr, size);

    cout << "Array after Heap Sort:" << endl;
    for (int i = 1; i <= size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
