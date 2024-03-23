#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0||n==1)
    return 1;

    int recAns=fact(n-1);

    int FinalAns=n*recAns;
    return FinalAns;
}
int main(){
    cout<<fact(7)<<endl;
}