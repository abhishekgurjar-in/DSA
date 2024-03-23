#include <iostream>
#include <climits>
using namespace std;

// Function to find the maximum number of cuts.
int maximizeTheCuts(int n, int x, int y, int z)
{
    // Base cases
    if (n == 0)
        return 0;
    if (n < 0)
        return INT_MIN;

    // Recursive calls to find the maximum cuts possible by considering all three options.
    int option1 = 1 + maximizeTheCuts(n - x, x, y, z);
    int option2 = 1 + maximizeTheCuts(n - y, x, y, z);
    int option3 = 1 + maximizeTheCuts(n - z, x, y, z);

    // Returning the maximum cuts among all three options.
    return max(option1, max(option2, option3));
}

int main()
{
    // Fixed values for the rod length and the lengths of segments x, y, z
    int n = 20;
    int x = 4, y = 3, z = 2;

    //calling function maximizeTheCuts()
    cout << maximizeTheCuts(n, x, y, z) << endl;

    return 0;
}
