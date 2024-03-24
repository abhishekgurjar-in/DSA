#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void countArrangmentHelper(vector<int>& v, int& n, int& ans, int currNum) {
        if (currNum == n + 1) {
            for (int i = 0; i < n; i++) {
                cout << v[i] << " ";
            }
            cout << endl;
            ++ans;
            return;
        }
        for (int i = 1; i <= n; ++i) {
            if (v[i] == 0 && (currNum % i == 0 || i % currNum == 0)) {
                v[i] = currNum;
                countArrangmentHelper(v, n, ans, currNum + 1);
                v[i] = 0;
            }
        }
    }
    int countArrangement(int n) {
        vector<int> v(n + 1);
        int ans = 0;
        countArrangmentHelper(v, n, ans, 1);
        return ans;
    }
};

// Main function for testing
int main() {
    Solution solution;
    int n = 2;
    int result = solution.countArrangement(n);
    cout << "Count of valid arrangements: " << result << endl;

    return 0;
}
