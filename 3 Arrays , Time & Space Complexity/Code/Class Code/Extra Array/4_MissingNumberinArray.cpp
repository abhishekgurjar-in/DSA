// #include<iostream>
// #include<vector>
// using namespace std;
// void missingNumber(vector<int>arr,int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum=sum+arr[i];
//     }
//     int actualSum=0;
//     actualSum=(n*(n+1))/2;
//     int ans=actualSum-sum;
//     cout<<ans<<" ";
// }
// int main(){
//     vector<int>arr{0,4,2,1,5};
//     int n=5;
//     missingNumber(arr,n);
// }
#include<iostream>
#include<vector>
// leetcode Missing Number 268
using namespace std;
void MissingNumber(vector<int>arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }

    int actualSum=0;
    actualSum=n*(n+1)/2;
    int ans=actualSum-sum;
    cout<<ans;
}
int main(){
    vector<int>arr{0,4,2,1,5};
    int n=5;
    MissingNumber(arr,n);
    }