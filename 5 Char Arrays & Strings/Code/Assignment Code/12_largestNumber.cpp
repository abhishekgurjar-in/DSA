#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    static bool mycomp(string a, string b) {
        string t1 = a + b;
        string t2 = b + a;
        return t1 > t2;
    }

    string largestNumber(vector<int> &nums) {
        vector<string> snums;
        for (auto n : nums) {
            snums.push_back(to_string(n));
        }
        sort(snums.begin(), snums.end(), mycomp);
        if (snums[0] == "0") return "0";
        string ans = "";
        for (auto str : snums) {
            ans += str;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 30, 34, 5, 9};
    string result = sol.largestNumber(nums);
    cout << "Largest number: " << result << endl;
    return 0;
}
