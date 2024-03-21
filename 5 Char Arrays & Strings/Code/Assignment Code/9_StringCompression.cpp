#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int compress(vector<char> &s) {
        int index = 0, count = 1;
        char prev = s[0];
        for (int i = 1; i < s.size(); ++i) {
            if (s[i] == prev) {
                count++;
            } else {
                s[index++] = prev;
                if (count > 1) {
                    int start = index;
                    while (count) {
                        s[index++] = (count % 10) + '0';
                        count /= 10;
                    }
                    reverse(s.begin() + start, s.begin() + index);
                }
                prev = s[i];
                count = 1;
            }
        }
        s[index++] = prev;
        if (count > 1) {
            int start = index;

            while (count) {
                s[index++] = (count % 10) + '0';
                count /= 10;
            }
            reverse(s.begin() + start, s.begin() + index);
        }
        return index;
    }
};

int main() {
    Solution sol;
    vector<char> s = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int result = sol.compress(s);
    cout << "Compressed length: " << result << endl;
    cout << "Compressed array: ";
    for (int i = 0; i < result; i++) {
        cout << s[i] << " ";
    }
    cout << endl;
    return 0;
}
