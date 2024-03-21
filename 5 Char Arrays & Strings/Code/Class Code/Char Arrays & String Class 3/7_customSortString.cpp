#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    // Custom comparator
    static string str;
    static bool compare(char char1, char char2) {
        // This will return true if the position of character1 in str string is
        // less than the position of character2 in str string
        // When true is returned, char1 will be placed before char2 in the output string
        return (str.find(char1) < str.find(char2));
    }

    string customSortString(string order, string s) {
        str = order;
        sort(s.begin(), s.end(), compare);
        return s;
    }
};

string Solution::str;

int main() {
    Solution sol;
    string order = "cba";
    string s = "abcd";

    string result = sol.customSortString(order, s);
    cout << "Sorted string: " << result << endl;

    return 0;
}
