#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    int ans=n+sum(n-1);
     return ans;
}
int main(){
    cout<<sum(5)<<endl;
}