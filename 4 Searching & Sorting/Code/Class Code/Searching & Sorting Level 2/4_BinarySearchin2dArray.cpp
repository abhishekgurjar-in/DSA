#include <iostream>
#include <vector>

class Solution {
public:
    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
        int rowSize = matrix.size();
        int colSize = matrix[0].size();
        int matrixSize = rowSize * colSize;

        int s = 0;
        int e = matrixSize - 1;
        int mid = s + (e - s) / 2;

        while (s <= e) {
            int rowIndex = mid / colSize;
            int colIndex = mid % colSize;
            int currentNumber = matrix[rowIndex][colIndex];

            if (target == currentNumber) {
                return true;
            } else if (target > currentNumber) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return false;
    }
};

int main() {
    Solution solution;
    std::vector<std::vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target;

    std::cout << "Enter the target element: ";
    std::cin >> target;

    bool result = solution.searchMatrix(matrix, target);

    if (result) {
        std::cout << "Target element " << target << " is found in the matrix." << std::endl;
    } else {
        std::cout << "Target element " << target << " is not found in the matrix." << std::endl;
    }

    return 0;
}
