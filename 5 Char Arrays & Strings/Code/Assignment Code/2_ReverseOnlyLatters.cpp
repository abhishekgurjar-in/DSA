#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l = 0, h = s.size() - 1;
        while (l < h) {
            if (isalpha(s[l]) && isalpha(s[h])) {
                swap(s[l], s[h]);
                l++, h--;
            } else if (!isalpha(s[l])) {
                l++;
            } else {
                h--;
            }
        }
        return s;
    }
};

int main() {
    Solution sol;
    string s = "a-bC-dEf-ghIj";
    cout << "Original string: " << s << endl;
    string reversed = sol.reverseOnlyLetters(s);
    cout << "Reversed string: " << reversed << endl;
    return 0;
}
