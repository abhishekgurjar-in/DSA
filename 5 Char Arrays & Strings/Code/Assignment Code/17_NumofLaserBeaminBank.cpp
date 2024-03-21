#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int countDevices(string &binary) {
        int c = 0;
        for (auto b : binary)
            c += b - '0';
        return c;
    }

    int numberOfBeams(vector<string> &bank) {
        vector<int> devices;
        for (auto row : bank)
            devices.push_back(countDevices(row));
        int beams = 0;
        for (int i = 0; i < devices.size(); ++i) {
            int j = i + 1;
            while (j < devices.size()) {
                beams += devices[i] * devices[j];
                if (devices[j] == 0)
                    j++;
                else
                    break;
            }
        }
        return beams;
    }
};

int main() {
    Solution sol;
    vector<string> bank = {"101", "000", "111", "100"};
    int result = sol.numberOfBeams(bank);
    cout << "Number of laser beams: " << result << endl;
    return 0;
}
