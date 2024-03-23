#include<bits/stdc++.h>
using namespace std;
void searchTarget(int*arr,int size,int index,int target,vector<int>&ans){
    //base case
    if(index>=size) return ;
    //processing
    if(arr[index]==target){
        ans.push_back(index);
    }
    //recursion call
    searchTarget(arr,size,index+1,target,ans);
}
int main(){
    int arr[]={40,30,10,20,10,10};
    int size=6;
    int index=0;
    int target=10;
    vector<int>ans;
    searchTarget(arr,size,index,target,ans);
    cout<<"indices where target found: ";
    for(auto num:ans){
        cout<<num<<" ";
    }
}
