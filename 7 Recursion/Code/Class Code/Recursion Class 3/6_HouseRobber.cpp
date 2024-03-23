#include<bits/stdc++.h>
using namespace std;
int rob(vector<int>&nums,int size,int index){
    //base case
    if(index>=size) return 0;
    int option1=nums[index]+rob(nums,size,index+2);
    int option2=0+rob(nums,size,index+1);
    return max(option1,option2);
}
int main(){
    vector<int>nums{2,9,7,4};
    int size=nums.size();
    int index=0;
    int ans=rob(nums,size,index);
    cout<<ans<<endl;
}