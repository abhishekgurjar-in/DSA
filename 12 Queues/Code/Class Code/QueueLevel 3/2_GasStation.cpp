#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int deficit = 0;
        int balance = 0;
        int start = 0;

        for (int index = 0; index < gas.size(); index++) {
            balance += gas[index] - cost[index];

            if (balance < 0) {
                deficit += abs(balance);
                start = index + 1;
                balance = 0;
            }
        }

        if (balance - deficit >= 0) {
            return start;
        } else {
            return -1;
        }
    }
};

int main() {
    Solution sol;
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};
    int result = sol.canCompleteCircuit(gas, cost);
    cout << "Starting index to complete the circuit: " << result << endl;

    return 0;
}
