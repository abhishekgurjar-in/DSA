#include <iostream>
#include <vector>

class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] > nums[high]) {
                // The pivot is in the right half
                low = mid + 1;
            } else {
                // The pivot is in the left half or mid itself
                high = mid;
            }
        }

        // At this point, low and high will be pointing to the pivot element
        int pivot = low;

        // Now, perform a binary search to find the target
        low = 0;
        high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int realMid = (mid + pivot) % n;

            if (nums[realMid] == target) {
                return realMid;
            } else if (nums[realMid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return -1; // Target not found
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {4, 5, 6, 7, 0, 1, 2}; // Example rotated sorted array
    int target = 0; // Target element to search for

    int result = solution.search(nums, target);

    if (result != -1) {
        std::cout << "Element " << target << " found at index " << result << std::endl;
    } else {
        std::cout << "Element " << target << " not found in the array." << std::endl;
    }

    return 0;
}
