#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq(piles.begin(), piles.end());
        while (k > 0) {
            double x = pq.top();
            pq.pop();
            pq.push(ceil(x / 2));
            k--;
        }
        int sum = 0;
        while (!pq.empty()) {
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};

int main() {
    Solution sol;
    vector<int> piles = { 5, 4, 9 };
    int k = 2;
    int result = sol.minStoneSum(piles, k);
    cout << "Result: " << result << endl; // Output: Result: 12
    return 0;
}
