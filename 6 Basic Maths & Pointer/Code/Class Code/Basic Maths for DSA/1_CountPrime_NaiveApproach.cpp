#include<bits/stdc++.h>
using namespace std;
bool isPrime(int &num){
    if(num<=1) return false;
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int countPrimes(int &num){
    int count=0;
    for(int i=0;i<num;i++){
        if(isPrime(i)){
            count++;
        }
    }
    return count;
}
int main(){
    int num=20;
    int count=countPrimes(num);
    cout<<count<<endl;
    
}