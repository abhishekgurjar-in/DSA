#include<iostream>
using namespace std;
//Reverse a Array
//Two Pointer Approach
void returnArray(int arr[],int size){
    int left=0;
    int right=size-1;
    while(left<=right){
        swap(arr[left],arr[right]);
         left++;
         right--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={10,20,30,40,50,60,70,80};
    int size=8;
    returnArray (arr,size);
}