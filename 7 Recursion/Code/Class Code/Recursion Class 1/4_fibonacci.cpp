#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n==0||n==1) return n;
    int ans=fib(n-1)+fib(n-2);
    return ans;
}
int main(){
    cout<<fib(8)<<endl;
}