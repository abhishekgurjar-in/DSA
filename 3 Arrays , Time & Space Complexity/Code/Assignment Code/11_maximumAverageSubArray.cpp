#include <iostream>
#include <vector>

class Solution {
public:
    double slidingWindow(std::vector<int>& nums, int k) {
        int i = 0;
        int j = k - 1;
        int sum = 0;
        for (int y = i; y <= j; ++y)
            sum += nums[y];
        int maxSum = sum;
        j++;
        while (j < nums.size()) {
            sum -= nums[i++];
            sum += nums[j++];
            maxSum = std::max(maxSum, sum);
        }
        double maxAvg = maxSum / static_cast<double>(k);
        return maxAvg;
    }

    double findMaxAverage(std::vector<int>& nums, int k) {
        return slidingWindow(nums, k);
    }
};

int main() {
    std::vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    Solution solution;

    double maxAvg = solution.findMaxAverage(nums, k);

    std::cout << "Maximum Average of Subarrays of Size " << k << ": " << maxAvg << std::endl;

    return 0;
}
