#include<iostream>
using namespace std;
int setKthBit(int N,int K){
    return N |(1<<K);
}
int main(){
    int N=10;
    int K=2;
    int ans=setKthBit(N,K);
    cout<<ans<<endl;

}