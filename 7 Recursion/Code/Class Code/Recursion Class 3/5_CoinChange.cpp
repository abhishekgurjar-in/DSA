#include<bits/stdc++.h>
using namespace std;
int coinChange(vector<int>&coin,int amount){
    //base case
    if(amount==0) return 0;
    if(amount<0) return INT_MAX;
    int mini =INT_MAX;
    for(auto currCoin:coin){
        int ans=coinChange(coin,amount-currCoin);
        if(ans!=INT_MAX)
        mini=min(mini,ans+1);
    }
    return mini;
}
int main(){
    vector<int>coins{1,2,5};
    int amount=11;
    int finalAns=coinChange(coins,amount);
    if(finalAns==INT_MAX){
        finalAns=-1;
    }
    cout<<finalAns<<endl;
}