#include<iostream>
using namespace std;
//Count 0 and 1 Value 
CountZero(int arr[],int n){
    int ZeroCount=0;
    int OneCount =0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            ZeroCount++;
        }
        else if(arr[i]==1){
            OneCount++;
        }
    }
    cout<<ZeroCount<<endl;
    cout<<OneCount<<endl;
}
int main(){
    int arr[]={0,0,0,1,0,1,1,0,1,1};
    int n=10;
  CountZero(arr,n);
  return 0;
}