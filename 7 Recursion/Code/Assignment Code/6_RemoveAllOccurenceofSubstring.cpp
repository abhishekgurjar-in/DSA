
#include <iostream>
using namespace std;

class Solution {
public:
    void removeOCCRE(string &s, const string &part) {
        size_t found = s.find(part);
        while (found != string::npos) {
            // Part string has been located, remove it
            s.erase(found, part.length());
            found = s.find(part, found);
        }
    }

    string removeOccurrence(string s, const string &part) {
        removeOCCRE(s, part);
        return s;
    }
};

int main() {
    Solution sol;
    string s = "This is a test string for testing purposes.";
    string part = "test";
    string result = sol.removeOccurrence(s, part);
    cout << result << endl;
    return 0;
}

