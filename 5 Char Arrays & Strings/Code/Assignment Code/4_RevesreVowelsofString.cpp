#include <iostream>

using namespace std;

class Solution {
public:
    bool isVowel(char ch){
        ch = tolower(ch);
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    string reverseVowels(string s) {
        int l = 0, h = s.size() - 1;
        while (l < h) {
            if (isVowel(s[l]) && isVowel(s[h])) {
                swap(s[l], s[h]);
                l++, h--;
            } else if (!isVowel(s[l])) {
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
    string input = "hello";
    cout << "Original string: " << input << endl;
    string result = sol.reverseVowels(input);
    cout << "String after reversing vowels: " << result << endl;
    return 0;
}
