#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int expand(string s, int i, int j) {
        int count = 0;
        while (i >= 0 && j < s.length() && s[i] == s[j]) {
            count++;
            i--;
            j++;
        }
        return count;
    }

    int countSubstrings(string s) {
        int totalCount = 0;
        for (int i = 0; i < s.length(); i++) {
            // ODD
            int j = i;
            int oddKaAns = expand(s, i, j);
            // EVEN
            j = i + 1;
            int evenKaAns = expand(s, i, j);
            totalCount = totalCount + oddKaAns + evenKaAns;
        }
        return totalCount;
    }
};

int main() {
    Solution sol;
    string s = "abc";
    int count = sol.countSubstrings(s);
    cout << "Total count of palindromic substrings: " << count << endl;
    return 0;
}
