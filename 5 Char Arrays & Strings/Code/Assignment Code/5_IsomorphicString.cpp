#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256] = {0};
        bool isCharMapped[256] = {0};
        for (int i = 0; i < s.size(); i++) {
            if (hash[s[i]] == 0 && isCharMapped[t[i]] == 0) {
                hash[s[i]] = t[i];
                isCharMapped[t[i]] = true;
            }
        }
        for (int i = 0; i < s.size(); i++) {
            if (static_cast<char>(hash[s[i]]) != t[i]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    string s = "12";
    string t = "\u0067\u0067";
    cout << "Result: " << (sol.isIsomorphic(s, t) ? "true" : "false") << endl;
    return 0;
}
