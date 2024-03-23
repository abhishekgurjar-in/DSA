#include<bits/stdc++.h>
using namespace std;
void digitofInteger(int num,vector<int>&ans){
    //base case
    if(num==0) return;
    //recursive call
    digitofInteger(num/10,ans);
    //processing
    ans.push_back(num%10);
}
int main(){
    int num=435267;
    vector<int>ans;
    digitofInteger(num,ans);
    cout<<"digits of integer are: ";

    for(auto num:ans){
        cout<<num<<" ";
    }
}