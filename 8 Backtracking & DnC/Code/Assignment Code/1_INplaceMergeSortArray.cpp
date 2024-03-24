#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void mergeInPlace(vector<int>& v, int start, int mid, int end) {
        int total_len = end - start + 1;
        int gap = total_len / 2 + total_len % 2;
        while (gap > 0) {
            int i = start, j = start + gap;
            while (j <= end) {
                if (v[i] > v[j]) {
                    swap(v[i], v[j]);
                }
                ++i, ++j;
            }
            gap = gap <= 1 ? 0 : (gap / 2) + (gap % 2);
        }
    }

    void mergeSort(vector<int>& v, int start, int end) {
        if (start >= end) return;
        int mid = (start + end) >> 1;
        mergeSort(v, start, mid);
        mergeSort(v, mid + 1, end);
        mergeInPlace(v, start, mid, end);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {5, 2, 3, 1};
    vector<int> sortedNums = solution.sortArray(nums);

    cout << "Sorted Array: ";
    for (int num : sortedNums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
