#include<bits/stdc++.h>
using namespace std;
int climbStairs(int n){
    //base case
    if(n==1||n==2) return n;
    //recursive call
    int ans=climbStairs(n-1)+climbStairs(n-2);
    return ans;
}
int main(){
    cout<<climbStairs(5)<<endl;
}