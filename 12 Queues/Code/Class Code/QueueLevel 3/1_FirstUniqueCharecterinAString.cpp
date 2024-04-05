#include <iostream>
#include <deque>
#include <string>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        deque<int> q;
        int freq[26] = {0};
        int ans = -1;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            freq[ch - 'a']++;
            q.push_back(i);

            while (!q.empty()) {
                char frontChar = s[q.front()];

                if (freq[frontChar - 'a'] > 1) {
                    q.pop_front();
                } else {
                    ans = q.front();
                    break;
                }
            }
        }

        if (q.empty()) {
            ans = -1;
        }

        return ans;
    }
};

int main() {
    Solution sol;
    string input = "leetcode";
    int index = sol.firstUniqChar(input);
    if (index != -1) {
        cout << "The index of the first unique character in \"" << input << "\" is " << index << endl;
    } else {
        cout << "No unique character found in \"" << input << "\"" << endl;
    }
    return 0;
}
