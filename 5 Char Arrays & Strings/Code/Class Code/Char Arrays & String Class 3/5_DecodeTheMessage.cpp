#include <iostream>
using namespace std;

class Solution {
public:
    string decodeMessage(string key, string message) {
        char start = 'a'; // Initialize a variable to store the starting character for the mapping
        char mapping[1000] = {0}; // Initialize an array for mapping characters

        for(auto ch: key) { // Iterate through each character in the key
            if(ch != ' ' && mapping[ch] == 0) { // Check if the character is not a space and has not been mapped yet
                mapping[ch] = start; // Map the character to the current starting character
                start++; // Increment the starting character
            }
        }   
        // Use the created mapping to decode the message
        string ans; // Initialize an empty string to store the decoded message

        for(auto ch: message) { // Iterate through each character in the message
            if(ch == ' ') {
                ans.push_back(' '); // If the character is a space, push a space into the decoded string
            }
            else {
                char decodedChar = mapping[ch]; // Get the corresponding decoded character from the mapping
                ans.push_back(decodedChar); // Push the decoded character into the decoded string
            }
        }
        return ans; // Return the decoded message
    }
};

int main() {
    Solution sol;
    string key = "abc";
    string message = "a b c";

    string decodedMessage = sol.decodeMessage(key, message);
    cout << "Decoded Message: " << decodedMessage << endl;

    return 0;
}
