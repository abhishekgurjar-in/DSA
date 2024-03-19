#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        if (m == 0) return ans; // Handle empty matrix case
        int n = matrix[0].size();
        int total_elements = m * n;

        int startingRow = 0;
        int endingCol = n - 1;
        int endingRow = m - 1;
        int startingCol = 0;

        int count = 0; // Initialize count

        while (count < total_elements) {
            // Print startingRow
            for (int i = startingCol; i <= endingCol && count < total_elements; i++) {
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;

            // Print endingRow
            for (int i = startingRow; i <= endingRow && count < total_elements; i++) {
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            // Print endingCol (if it's still valid)
            if (startingRow <= endingRow) {
                for (int i = endingCol; i >= startingCol && count < total_elements; i--) {
                    ans.push_back(matrix[endingRow][i]);
                    count++;
                }
                endingRow--;
            }

            // Print startingCol (if it's still valid)
            if (startingCol <= endingCol) {
                for (int i = endingRow; i >= startingRow && count < total_elements; i--) {
                    ans.push_back(matrix[i][startingCol]);
                    count++;
                }
                startingCol++;
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    vector<int> result = solution.spiralOrder(matrix);
    
    cout << "Spiral Order Traversal: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
