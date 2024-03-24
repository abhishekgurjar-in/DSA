#include<bits/stdc++.h>
using namespace std;

void quickSort(int arr[], int start, int end) {
    // base case
    if (start >= end) return;
    
    int i = start - 1;
    int j = start;
    // let's take end as pivot
    int pivot = end;

    while (j < pivot) {
        if (arr[j] < arr[pivot]) {
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    i++; // added a missing semicolon
    swap(arr[i], arr[pivot]);

    // Recursively sort elements before and after the partition
    quickSort(arr, start, i - 1);
    quickSort(arr, i + 1, end);
}

int main() {
    int arr[] = {40, 20, 10, 30, 50};
    int size = 5;
    int start = 0;
    int end = size - 1;

    quickSort(arr, start, end);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
