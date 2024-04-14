#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string reorganizeString(string s) {
        vector<int> freq(26, 0);
        int n = s.length();
        int maxiCnt = 0, maxiIdx = 0;
        char ele;
        for (int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
            if (freq[s[i] - 'a'] > maxiCnt) {
                maxiCnt = freq[s[i] - 'a'];
                maxiIdx = s[i] - 'a';
                ele = s[i];
            }
        }

        int idx = 0;
        if (freq[maxiIdx] * 2 - 1 > s.length()) return "";
        while (freq[maxiIdx] > 0) {
            s[idx] = maxiIdx + 'a';
            idx += 2;
            freq[maxiIdx]--;
        }
        for (int i = 0; i < 26; i++) {
            while (freq[i] > 0) {
                if (idx >= s.length()) {
                    idx = 1;
                }
                s[idx] = i + 'a';
                idx += 2;
                freq[i]--;
            }
        }
        return s;
    }
};

int main() {
    Solution sol;
    string input = "aab";
    string result = sol.reorganizeString(input);
    cout << "Result: " << result << endl; // Output: "aba"
    return 0;
}
