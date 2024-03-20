#include<iostream>
using namespace std;
//Leetcode Peak Element -852
int PeakElementinMountain(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return e;
}
int main(){
    int arr[]={10,20,30,90,70,60,50,40};
    int n=8;
    int ans=PeakElementinMountain(arr,n);
    cout<<"Peak Element at index : "<<ans;
}