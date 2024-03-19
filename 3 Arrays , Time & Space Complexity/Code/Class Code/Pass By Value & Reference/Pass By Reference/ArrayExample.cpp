#include<iostream>
using namespace std;
void PassByRefer(int arr[],int n){
    arr[2]=30;
}
int main(){
    int arr[]={10,20,25,40};
    int size=4;
    PassByRefer(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}