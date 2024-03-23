#include <iostream>
using namespace std;

class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
        if (target < 0) return 0;
        if (n == 0 && target == 0) return 1;
        if (n == 0 && target != 0) return 0;
        if (n == 0 && target == 0) return 0;
        int ans = 0;
        for (int i = 1; i <= k; i++) {
            ans = ans + numRollsToTarget(n - 1, k, target - i);
        }
        return ans;
    }
};

int main() {
    Solution solution;
    int n1 = 1, k1 = 6, target1 = 3;
    cout << "Output for n = " << n1 << ", k = " << k1 << ", target = " << target1 << ": ";
    cout << solution.numRollsToTarget(n1, k1, target1) << endl;

    int n2 = 2, k2 = 6, target2 = 7;
    cout << "Output for n = " << n2 << ", k = " << k2 << ", target = " << target2 << ": ";
    cout << solution.numRollsToTarget(n2, k2, target2) << endl;

    return 0;
}
