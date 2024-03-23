#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<pair<int, string>> thousands = {
        {1000000000, "Billion"}, {1000000, "Million"}, {1000, "Thousand"}
    };
    vector<pair<int, string>> belowTwenty = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"},
        {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}, {10, "Ten"},
        {11, "Eleven"}, {12, "Twelve"}, {13, "Thirteen"}, {14, "Fourteen"},
        {15, "Fifteen"}, {16, "Sixteen"}, {17, "Seventeen"}, {18, "Eighteen"},
        {19, "Nineteen"}
    };
    vector<pair<int, string>> tens = {
        {20, "Twenty"}, {30, "Thirty"}, {40, "Forty"}, {50, "Fifty"},
        {60, "Sixty"}, {70, "Seventy"}, {80, "Eighty"}, {90, "Ninety"}
    };

    string numberToWords(int num) {
        if (num == 0) {
            return "Zero";
        }
        return convertToWords(num).substr(1);
    }

    string convertToWords(int num) {
        if (num >= 1000000000) {
            return convertToWords(num / 1000000000) + " Billion" + convertToWords(num % 1000000000);
        } else if (num >= 1000000) {
            return convertToWords(num / 1000000) + " Million" + convertToWords(num % 1000000);
        } else if (num >= 1000) {
            return convertToWords(num / 1000) + " Thousand" + convertToWords(num % 1000);
        } else if (num >= 100) {
            return convertToWords(num / 100) + " Hundred" + convertToWords(num % 100);
        } else if (num >= 20) {
            for (auto &t : tens) {
                if (num >= t.first && num < t.first + 10) {
                    return " " + t.second + convertToWords(num % 10);
                }
            }
        } else if (num > 0) {
            for (auto &bt : belowTwenty) {
                if (num == bt.first) {
                    return " " + bt.second;
                }
            }
        }
        return "";
    }
};

int main() {
    Solution solution;
    int num1 = 123;
    int num2 = 12345;
    int num3 = 1234567;

    // Output for num1
    cout << "Input: " << num1 << "\n";
    cout << "Output: " << solution.numberToWords(num1) << "\n\n";

    // Output for num2
    cout << "Input: " << num2 << "\n";
    cout << "Output: " << solution.numberToWords(num2) << "\n\n";

    // Output for num3
    cout << "Input: " << num3 << "\n";
    cout << "Output: " << solution.numberToWords(num3) << "\n";

    return 0;
}
