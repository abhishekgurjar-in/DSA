#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        for (int i = 0; i <= n - m; i++) {
            for (int j = 0; j < m; j++) {
                if (needle[j] != haystack[i + j]) {
                    break;
                }
                if (j == m - 1) {
                    return i;
                }
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    string haystack = "hello";
    string needle = "ll";
    int result = sol.strStr(haystack, needle);
    cout << "Result: " << result << endl;
    return 0;
}
