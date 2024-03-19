#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int i = 0;
        int j = 0;
        while (i < nums.size()) {
            if (nums[i] == nums[j]) {
                ++i;
            } else {
                nums[++j] = nums[i++];
            }
        }
        return j + 1;
    }
};

int main() {
    // Example usage:
    std::vector<int> nums = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    Solution solution;

    int newLength = solution.removeDuplicates(nums);

    std::cout << "Modified Array: ";
    for (int i = 0; i < newLength; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << "\nNew Length: " << newLength << std::endl;

    return 0;
}
