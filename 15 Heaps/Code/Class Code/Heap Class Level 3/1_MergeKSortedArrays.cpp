

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Info {
public:
    int data;
    int rowIndex;
    int colIndex;

    Info(int data, int rowIndex, int colIndex) {
        this->data = data;
        this->rowIndex = rowIndex;
        this->colIndex = colIndex;
    }
};

class Compare {
public:
    bool operator()(Info* first, Info* second) {
        return first->data > second->data;
    }
};

void mergeKSortedArrays(int arr[][4], int n, int k, vector<int>& ans) {
    priority_queue<Info*, vector<Info*>, Compare> pq;
    for (int row = 0; row < k; row++) {
        int element = arr[row][0];
        Info* tempNode = new Info(element, row, 0);
        pq.push(tempNode);
    }
    while (!pq.empty()) { // Corrected typo here
        Info* topNode = pq.top();
        pq.pop();

        int topData = topNode->data;
        int topRow = topNode->rowIndex;
        int topCol = topNode->colIndex;

        ans.push_back(topData);

        if (topCol + 1 < n) {
            Info* newNode = new Info(arr[topRow][topCol + 1], topRow, topCol + 1);
            pq.push(newNode);
        }
    }
}

int main() { // Moved main outside of mergeKSortedArrays
    int rowSize = 3;
    int colSize = 4;
    int arr[3][4] = {{1, 4, 8, 10}, {2, 3, 6, 9}, {5, 7, 11, 12}};

    int n = colSize;
    int k = rowSize;

    vector<int> ans;
    mergeKSortedArrays(arr, n, k, ans);

    cout << "Printing Single Sorted Array : " << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
