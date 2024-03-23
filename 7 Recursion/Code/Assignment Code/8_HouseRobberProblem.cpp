#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int robHelper(vector<int>& nums, int i) {
        if (i >= nums.size()) {
            return 0;
        }
        int robAnt1 = nums[i] + robHelper(nums, i + 2);
        int robAnt2 = 0 + robHelper(nums, i + 1);
        return max(robAnt1, robAnt2);
    }
    int rob(vector<int>& nums) {
        return robHelper(nums, 0);
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 9, 3, 1}; // Example input, you can change this
    cout << "Maximum amount that can be robbed: " << sol.rob(nums) << endl;
    return 0;
}
