#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> calculateFactorial(int N) {
    vector<int> ans;
    ans.push_back(1);
    int carry = 0;
    
    for (int i = 2; i <= N; i++) { // Start from i=2 and go up to N
        for (int j = 0; j < ans.size(); j++) {
            int x = ans[j] * i + carry;
            ans[j] = x % 10;
            carry = x / 10;
        }
        while (carry) {
            ans.push_back(carry % 10);
            carry /= 10;
        }
    }
    
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    vector<int> result = calculateFactorial(N);

    cout << "Factorial of " << N << " is: ";
    for (int digit : result) {
        cout << digit;
    }
    cout << endl;

    return 0;
}
