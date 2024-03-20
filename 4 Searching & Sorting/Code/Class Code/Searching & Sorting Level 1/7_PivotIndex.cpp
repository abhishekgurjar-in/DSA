#include<iostream>
using namespace std;

int PivotIndex(int arr[], int n) {
    int rightSum = 0;
    int leftSum = 0;

    // Calculate total sum as right sum
    for (int i = 0; i < n; i++) {
        rightSum += arr[i];
    }

    for (int i = 0; i < n; i++) {
        rightSum -= arr[i];
        if (rightSum == leftSum) {
            return i;
        }
        leftSum += arr[i];
    }

    return -1;
}

int main() {
    int arr[] = {1, 7, 3, 6, 5, 6};
    int n = 6;
    int pivotIndex = PivotIndex(arr, n);
    
    if (pivotIndex != -1) {
        cout << "Pivot index is: " << pivotIndex << endl;
    } else {
        cout << "There is no pivot index in the array." << endl;
    }

    return 0;
}