#include <iostream>

using namespace std;

class Solution {
public:
    string removeDuplicates(string s, int k) {
        int i=0,j=0;
        vector<int>count(s.size());
        while(j<s.size()){
            s[i]=s[j];
            count[i]=1;
            if(i>0&&s[i]==s[i-1])
            count[i]+=count[i-1];
            if(count[i]==k)
            i-=k;
            ++i,++j;
        }
        return s.substr(0,i);
    }
};

int main() {
    Solution solution;
    string s = "abbbaaac";
    int k = 3;
    cout << "Original string: " << s << endl;
    cout << "After removing duplicates: " << solution.removeDuplicates(s, k) << endl;
    return 0;
}
