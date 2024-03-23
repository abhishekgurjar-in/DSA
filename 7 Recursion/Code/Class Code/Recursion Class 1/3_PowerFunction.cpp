#include<bits/stdc++.h>
using namespace std;


int power(int n,int m){
    if(m==0) return 1;
    int pow=power(n,m-1);
    return (n*pow);
}
int main(){
    cout<<power(5,3)<<endl;
}