#include <iostream>
#include <unordered_map>

class Solution {
public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        std::unordered_map<int, int> hash;
        for (int i = 0; i < n; i++) {
            hash[arr[i]]++;
        }
        for (int i = 0; i < n; i++) {
            if (hash[arr[i]] > 1) {
                return i + 1;
            }
        }
        return -1;
    }
};

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    Solution solution;
    int result = solution.firstRepeated(arr, n);

    if (result != -1) {
        std::cout << "The first repeating element is at position: " << result << std::endl;
    } else {
        std::cout << "There are no repeating elements in the array." << std::endl;
    }

    return 0;
}





