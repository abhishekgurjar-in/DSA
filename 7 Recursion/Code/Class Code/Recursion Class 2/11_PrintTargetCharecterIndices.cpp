#include<bits/stdc++.h>
using namespace std;
void charIndex(string s,int index,char target,vector<int>&ans){
    //base case
    if(index>=s.length()) return ;
    //processing
    if(s[index]==target){
        ans.push_back(index);
        //recursive call
        charIndex(s,index+1,target,ans);
    }
}
int main(){
    string s="babbar";
    int index=0;
    char target='b';
    vector<int>ans;
    charIndex(s,index,target,ans);
    cout<<"target indices are: ";
    for(auto num:ans){
        cout<<num<<" ";
    }
}