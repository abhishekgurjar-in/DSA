#include<bits/stdc++.h>
using namespace std;
void findEven(int *arr,int size,int index,vector<int>&ans)
{
    //base case
    if(index>=size)
    return;
    //processing
    if((arr[index]&1)==0)
    ans.push_back(arr[index]);

    //recursive call
    findEven(arr,size,index+1,ans);
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int size=6;
    int index=0;
    vector<int>ans;
    findEven(arr,size,index,ans);
    for(auto num:ans){
        cout<<num<<" ";
    }
}