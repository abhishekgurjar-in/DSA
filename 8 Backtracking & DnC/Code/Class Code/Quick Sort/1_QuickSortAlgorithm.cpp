#include<bits/stdc++.h>
using namespace std;
//This function divides the array into left and right using pivot
int partition(int arr[], int s, int e) {
    //lets take starting index as pivot
    int pivotIndex = s;
    int pivotElement = arr[s]; // fixed a missing semicolon and added a missing semicolon

    // count all elements less than pivot element
    int count = 0;
    for (int i = s + 1; i <= e; i++) { // changed the condition to i <= e
        if (arr[i] <= pivotElement) {
            count++;
        }
    }
    // place pivot element at the position it must be in
    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    // update pivot index
    pivotIndex = rightIndex;
    // pivot element se chhote uske left mai and bade right mai krdo
    int i = s; // changed variable j to i
    int j = e; // changed variable j to i
    while (i < pivotIndex && j > pivotIndex) { // corrected the capitalization of variable j
        while (arr[i] <= pivotElement) {
            i++;
        }
        while (arr[j] > pivotElement) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[], int s, int e) {
    // base case
    if (s >= e) {
        // in case of empty array & single element
        return;
    }
    // partition logic
    int pivot = partition(arr, s, e);
    // recursive call for left
    quickSort(arr, s, pivot - 1);
    // recursive call for right
    quickSort(arr, pivot + 1, e);
}
int main() {
    int arr[] = {40, 20, 10, 30, 50};
    int size = 5;
    int s = 0;
    int e = size - 1;
    quickSort(arr, s, e); // corrected the function name to quickSort
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0; // added a return statement to main function
}
