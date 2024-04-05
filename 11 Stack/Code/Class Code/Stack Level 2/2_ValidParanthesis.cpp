#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            char bracket = s[i];

            if (bracket == '(' || bracket == '{' || bracket == '[') {
                st.push(bracket);
            } else {
                if (st.empty()) {
                    return false;  // More closing brackets than opening brackets
                }

                char topBracket = st.top();
                if ((bracket == ')' && topBracket == '(') ||
                    (bracket == '}' && topBracket == '{') ||
                    (bracket == ']' && topBracket == '[')) {
                    st.pop();
                } else {
                    return false;  // Mismatched closing bracket
                }
            }
        }

        return st.empty();  // Check if there are any leftover opening brackets
    }
};

int main() {
    Solution solution;
    string input;

    cout << "Enter a string with brackets: ";
    cin >> input;

    bool valid = solution.isValid(input);
    if (valid) {
        cout << "The string has valid bracket pairs." << endl;
    } else {
        cout << "The string has invalid bracket pairs." << endl;
    }

    return 0;
}
