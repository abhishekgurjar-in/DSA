#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int ReverseInteger(int x){
  int ans=0;
  int rem=0;
  bool isNeg=false;
  if (x<=INT_MIN){
    return 0;
  }
  if(x<0){
isNeg=true;
x=-x;
  }
  
  while(x>0){
    if(ans>=INT_MAX){
      return 0;
    }
    int digit=x%10;
    ans=ans*10+digit;
    x=x/10;
  }
  return isNeg ? -ans: ans;
}
int main(){
  int x=-123;
  int ans=ReverseInteger(x);
  cout<<ans<<endl;
}
