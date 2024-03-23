#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

class Solution {
public:
    int numSquareHelper(int n) {
        if (n == 0) return 1;
        if (n < 0) return 0;
        int ans = INT_MAX;
        int i = 1;
        int end = sqrt(n);
        while (i <= end) {
            int perfectSquare = i * i;
            int numberofPerfectSquares = 1 + numSquareHelper(n - perfectSquare);
            if (numberofPerfectSquares < ans) {
                ans = numberofPerfectSquares;
            }
            ++i;
        }
        return ans;
    }
    int numSquares(int n) {
        return numSquareHelper(n) - 1;
    }
};

int main() {
    Solution solution;
    int n1 = 12;
    int n2 = 13;
    cout << "Output for n = " << n1 << ": " << solution.numSquares(n1) << endl;
    cout << "Output for n = " << n2 << ": " << solution.numSquares(n2) << endl;

    return 0;
}
