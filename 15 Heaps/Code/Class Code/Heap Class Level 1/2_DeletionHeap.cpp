#include <iostream>
using namespace std;

class Heap {
private:
    int *arr;
    int capacity;
    int size;

public:
    Heap(int capacity) {
        this->arr = new int[capacity];
        this->capacity = capacity;
        this->size = 0;
    }

    void insertion(int val) {
        if (size == capacity) {
            cout << "Heap Overflow" << endl;
            return;
        }
        size++;
        int index = size;
        arr[index] = val;

        while (index > 1) {
            int parentIndex = index / 2;
            if (arr[index] > arr[parentIndex]) {
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            } else {
                break;
            }
        }
    }

    int deleteFromHeap() {
        if (size == 0) {
            cout << "Heap Underflow" << endl;
            return -1; // Assuming -1 is used to indicate an error or an empty heap
        }

        int saveRoot = arr[1];
        arr[1] = arr[size]; // Replace the root with the last element
        size--;

        int index = 1;
        while (true) {
            int leftIndex = 2 * index;
            int rightIndex = 2 * index + 1;
            int largestIndex = index;

            if (leftIndex <= size && arr[largestIndex] < arr[leftIndex]) {
                largestIndex = leftIndex;
            }
            if (rightIndex <= size && arr[largestIndex] < arr[rightIndex]) {
                largestIndex = rightIndex;
            }
            if (index == largestIndex) {
                break;
            } else {
                swap(arr[largestIndex], arr[index]);
                index = largestIndex;
            }
        }
        return saveRoot;
    }

    void printHeap() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Heap() {
        delete[] arr;
    }
};

int main() {
    int capacity = 10;
    Heap *h = new Heap(capacity);

    h->insertion(10);
    h->insertion(20);
    h->insertion(5);
    h->insertion(11);
    h->insertion(6);

    cout << "Heap after insertions:" << endl;
    h->printHeap();

    int deleted = h->deleteFromHeap();
    cout << "Deleted element from heap: " << deleted << endl;

    cout << "Heap after deletion:" << endl;
    h->printHeap();

    delete h; // Free the memory allocated for the heap
    return 0;
}
