#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    void maxProfitFinder(vector<int> &prices, int i, int &minPrice, int &maxProfit) {
        // Base case
        if (i == prices.size()) {
            return;
        }
        // Solution for one case
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
        int todayProfit = prices[i] - minPrice;
        if (todayProfit > maxProfit) {
            maxProfit = todayProfit;
        }
        // Recursive case
        maxProfitFinder(prices, i + 1, minPrice, maxProfit);
    }

    int maxProfit(vector<int> &prices) {
        int minPrice = INT_MAX;
        int maxProfit = INT_MIN;
        maxProfitFinder(prices, 0, minPrice, maxProfit);
        return maxProfit;
    }
};

int main() {
    Solution solution;
    vector<int> prices = {7, 1, 5, 3, 6, 4}; // Example input prices
    int maxProfit = solution.maxProfit(prices);
    cout << "Maximum profit: " << maxProfit << endl;
    return 0;
}
