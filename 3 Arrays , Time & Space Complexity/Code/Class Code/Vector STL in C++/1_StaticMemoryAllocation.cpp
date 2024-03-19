#include<iostream>
using namespace std;
void func(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    //Static Memory Allocation
    int arr[5]={1,2,3,4,5};
    int n=5;
    func(arr,n);
}