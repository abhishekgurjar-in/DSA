#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.size();
        int n = p.size();

        vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
        dp[0][0] = true;

        for (int j = 1; j <= n; j++) {
            if (p[j - 1] == '*') {
                dp[0][j] = dp[0][j - 1];
            }
        }

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (p[j - 1] == '*') {
                    dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
                } else if (p[j - 1] == '?' || s[i - 1] == p[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1];
                }
            }
        }

        return dp[m][n];
    }
};

int main() {
    Solution solution;
    string s1 = "aa";
    string p1 = "a";
    cout << "Input: s = " << s1 << ", p = " << p1 << endl;
    cout << "Output: " << (solution.isMatch(s1, p1) ? "true" : "false") << endl;

    string s2 = "aa";
    string p2 = "*";
    cout << "Input: s = " << s2 << ", p = " << p2 << endl;
    cout << "Output: " << (solution.isMatch(s2, p2) ? "true" : "false") << endl;

    string s3 = "cb";
    string p3 = "?a";
    cout << "Input: s = " << s3 << ", p = " << p3 << endl;
    cout << "Output: " << (solution.isMatch(s3, p3) ? "true" : "false") << endl;

    return 0;
}
