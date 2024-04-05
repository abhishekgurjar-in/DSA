#include <iostream>
#include <vector>
#include <deque>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> q;
        vector<int> ans;

        for (int index = 0; index < k; index++) {
            int element = nums[index];
            while (!q.empty() && element > nums[q.back()]) {
                q.pop_back();
            }
            q.push_back(index);
        }

        for (int index = k; index < nums.size(); index++) {
            ans.push_back(nums[q.front()]);

            if (!q.empty() && index - q.front() >= k) {
                q.pop_front();
            }

            while (!q.empty() && nums[index] > nums[q.back()]) {
                q.pop_back();
            }
            q.push_back(index);
        }

        ans.push_back(nums[q.front()]);
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};  // Example input vector
    int k = 3;  // Window size

    vector<int> result = sol.maxSlidingWindow(nums, k);

    // Print the result
    cout << "Max Sliding Window for input vector [";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i < nums.size() - 1) {
            cout << ", ";
        }
    }
    cout << "] with window size " << k << ":" << endl;
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
