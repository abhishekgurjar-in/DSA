#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;
        for(auto str:strs){
            string s=str;
            sort(s.begin(),s.end());
            mp[s].push_back(str);
        }
        vector<vector<string>>ans;
        for(auto it= mp.begin(); it!=mp.end();it++){
            ans.push_back(it->second);
        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> groupedAnagrams = solution.groupAnagrams(strs);
    cout << "Grouped Anagrams:" << endl;
    for (const auto& group : groupedAnagrams) {
        for (const auto& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }
    return 0;
}





// #include <iostream>
// #include <string>
// #include <vector>
// #include <array>
// #include <map>

// using namespace std;

// class Solution {
// public:
//     std::array<int,256> hash(string s){
//         std::array<int,256> hash = {0};
//         for(int i = 0; i < s.size(); i++){
//             hash[s[i]]++;
//         }
//         return hash;
//     }

//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         map<std::array<int,256>, vector<string>> mp;
//         for(auto str : strs){
//             mp[hash(str)].push_back(str);
//         }
//         vector<vector<string>> ans;
//         for(auto it = mp.begin(); it != mp.end(); it++){
//             ans.push_back(it->second);
//         }
//         return ans;
//     }
// };

// int main() {
//     Solution sol;
//     vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
//     vector<vector<string>> result = sol.groupAnagrams(strs);

//     cout << "Anagrams groups are: " << endl;
//     for (const auto &group : result) {
//         cout << "[ ";
//         for (const auto &word : group) {
//             cout << word << " ";
//         }
//         cout << "]" << endl;
//     }

//     return 0;
// }
