#include<iostream>
using namespace std;

void sortZeroOne(int arr[],int n){
    //For Counting Zeros and Ones
    int zeroCount=0;
    int oneCount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zeroCount++;
        }
        else if(arr[i]==1){
            oneCount++;
        }
    }
    //for Sorting 0s and 1s respectivey
    int index=0;
    while(zeroCount--){
        arr[index]=0;
        index++;
    }
    while(oneCount--){
        arr[index]=1;
        index++;
    }
}
int main(){
    int arr[]={0,1,1,0,0,1,1,1,1};
    int n=9;
    sortZeroOne(arr,n);
    //for printing the sorted Array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}