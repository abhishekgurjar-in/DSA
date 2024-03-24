#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canDistributeHelper(vector<int>& counts, vector<int>& quantity, int ithCustomer) {
        if (ithCustomer == quantity.size()) {
            return true;
        }
        for (int i = 0; i < counts.size(); ++i) {
            if (counts[i] >= quantity[ithCustomer]) {
                counts[i] -= quantity[ithCustomer];
                if (canDistributeHelper(counts, quantity, ithCustomer + 1)) {
                    return true;
                }
                counts[i] += quantity[ithCustomer];
            }
        }
        return false;
    }
    
    bool canDistribute(vector<int>& nums, vector<int>& quantity) {
        unordered_map<int, int> countMap;
        for (auto num : nums) {
            countMap[num]++;
        }
        vector<int> counts;
        for (auto it : countMap) {
            counts.push_back(it.second);
        }
        sort(quantity.rbegin(), quantity.rend());
        return canDistributeHelper(counts, quantity, 0);
    }
};

// Main function for testing
int main() {
    Solution solution;
    vector<int> nums = {1, 1, 2, 2, 2, 3};
    vector<int> quantity = {2, 2};
    bool result = solution.canDistribute(nums, quantity);
    cout << "Can the distribution be done? " << (result ? "Yes" : "No") << endl;
    return 0;
}
