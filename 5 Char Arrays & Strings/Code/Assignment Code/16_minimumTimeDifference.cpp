#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits> // Include the limits header for INT_MAX
using namespace std;

class Solution {
public:
    int convertTomin(string &time) {
        int hr = stoi(time.substr(0, 2));
        int min = stoi(time.substr(3, 2));
        return 60 * hr + min;
    }

    int findMinDifference(vector<string> &timePoints) {
        vector<int> mins;
        for (auto time : timePoints)
            mins.push_back(convertTomin(time));
        sort(mins.begin(), mins.end());
        int ans = numeric_limits<int>::max(); // Use numeric_limits to get INT_MAX
        for (int i = 0; i < mins.size() - 1; ++i)
            ans = min(ans, mins[i + 1] - mins[i]);
        int lastdiff = mins[0] + 1440 - mins[mins.size() - 1];
        ans = min(ans, lastdiff);
        return ans;
    }
};

int main() {
    Solution sol;
    vector<string> timePoints = {"23:59", "00:00", "12:34"};
    int result = sol.findMinDifference(timePoints);
    cout << "Result: " << result << endl;
    return 0;
}
