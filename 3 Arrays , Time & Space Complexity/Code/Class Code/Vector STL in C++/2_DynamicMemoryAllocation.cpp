#include<iostream>
using namespace std;
void func(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    //Dynamic Memory Allocation
    int n;
    cin>>n;
    int *arr=new int[n];
    //Dynamic Allocation
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        arr[i]=data;
    }
    func(arr,n);
}