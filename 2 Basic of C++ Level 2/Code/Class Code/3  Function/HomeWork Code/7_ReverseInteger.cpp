#include<iostream>
using namespace std;
// Leetcode Reverse Integer 7
int reverse(int x){
  int ans=0;
  int rem=0;
  bool isNeg=false;
  if(x<0){
    isNeg=true;
    x=-x;
  }
  while(x>0){
    int digit=x%10;
    ans=ans*10+digit;
    x=x/10;
    
  } 
  return isNeg ? -ans: ans; 
}
int main(){
    int x;
    cin>>x;
    int solution=reverse(x);
    cout<<solution<<endl;
}