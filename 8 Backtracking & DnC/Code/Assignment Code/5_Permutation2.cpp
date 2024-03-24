#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    void permuteUniqueHelper(vector<int>& nums, vector<vector<int>>& ans, int start) {
        if (start == nums.size()) {
            ans.push_back(nums);
            return;
        }
        unordered_map<int, bool> visited;
        for (int i = start; i < nums.size(); i++) {
            if (visited.find(nums[i]) != visited.end()) {
                continue;
            }
            visited[nums[i]] = true;
            swap(nums[i], nums[start]);
            permuteUniqueHelper(nums, ans, start + 1);
            swap(nums[i], nums[start]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        permuteUniqueHelper(nums, ans, 0);
        return ans;
    }
};

// Main function for testing
int main() {
    Solution solution;
    vector<int> nums = {1, 1, 2};
    vector<vector<int>> result = solution.permuteUnique(nums);

    // Print the result
    for (const auto& vec : result) {
        cout << "[";
        for (int i = 0; i < vec.size(); i++) {
            cout << vec[i];
            if (i != vec.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}
