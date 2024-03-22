#include<bits/stdc++.h>
using namespace std;
int modularExponentiation(int a,int b,int modulo){
    int ans=1;
    while(b>0){
        if(b&1){
            ans=(ans*a)%modulo;
        }
        a=(a*a)%modulo;
        b>>=1;
    }
    return ans%modulo;
}
int main(){
    cout<<modularExponentiation(5,4,7)<<endl;
}