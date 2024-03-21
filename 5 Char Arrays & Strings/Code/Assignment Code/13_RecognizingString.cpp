#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reorganizeString(string s) {
        int hash[26] = {0};
        for (char ch : s) {
            hash[ch - 'a']++;
        }
        int maxFreq = 0;
        char maxFreqChar = 'a';
        for (int i = 0; i < 26; i++) {
            if (hash[i] > maxFreq) {
                maxFreq = hash[i];
                maxFreqChar = i + 'a';
            }
        }
        if (maxFreq > (s.size() + 1) / 2) {
            return "";
        }
        int index = 0;
        while (maxFreq > 0) {
            s[index] = maxFreqChar;
            index += 2;
            maxFreq--;
        }
        for (int i = 0; i < 26; i++) {
            while (hash[i] > 0) {
                if (index >= s.size()) {
                    index = 1;
                }
                s[index] = i + 'a';
                index += 2;
                hash[i]--;
            }
        }
        return s;
    }
};

int main() {
    Solution sol;
    string input = "aab";
    string result = sol.reorganizeString(input);
    cout << "Reorganized string: " << result << endl;
    return 0;
}
