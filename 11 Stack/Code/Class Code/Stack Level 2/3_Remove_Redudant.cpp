#include<iostream>
#include<stack>
using namespace std;

bool checkRedundant(string &str) {
    stack<char> st;

    if (str.length() == 1) {
        return true;  // Single character expressions are considered redundant
    }

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '/' || ch == '*') {
            st.push(ch);
        } else if (ch == ')') {
            int operatorCount = 0;

            // Count operators until an opening bracket is encountered
            while (!st.empty() && st.top() != '(') {
                char temp = st.top();
                if (temp == '+' || temp == '-' || temp == '/' || temp == '*') {
                    operatorCount++;
                }
                st.pop();
            }

            st.pop();  // Pop the opening bracket
            if (operatorCount == 0) {
                return true;  // Redundant brackets found
            }
        }
    }
    return false;  // No redundant brackets found
}

int main() {
    string str = "((a+b)*(c+d))";
    bool ans = checkRedundant(str);

    if (ans) {
        cout << "Redundant Brackets Present" << endl;
    } else {
        cout << "Redundant Brackets Not Present" << endl;
    }
    return 0;
}
