#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    while(a>0&&b>0){
        if(a>b){
            a-=b;
        }
        else{
            b-=a;
        }
    }
    return a==0?b:a;
}
int main(){
    int a=75;
    int b=125;
    int ans=gcd(a,b);
    cout<<ans;
}