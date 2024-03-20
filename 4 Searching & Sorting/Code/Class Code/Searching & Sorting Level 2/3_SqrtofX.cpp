#include <iostream>

class Solution {
public:
    int mySqrt(int x) {
        // Initialize variables
        int s = 0;
        int e = x;
        long long int mid;
        int ans = -1;

        // Perform binary search
        while (s <= e) {
            mid = s + (e - s) / 2;

            // Check if mid*mid is equal to x
            if (mid * mid == x) {
                return mid;
            }
            // If mid*mid is greater than x, search the left half
            else if (mid * mid > x) {
                e = mid - 1;
            }
            // If mid*mid is less than x, store mid as a potential answer and search the right half
            else {
                ans = mid;
                s = mid + 1;
            }
        }

        // Return the last stored potential answer
        return ans;
    }
};

int main() {
    Solution solution;
    int x;

    std::cout << "Enter a number: ";
    std::cin >> x;

    int result = solution.mySqrt(x);
    std::cout << "Square root of " << x << " is " << result << std::endl;

    return 0;
}
