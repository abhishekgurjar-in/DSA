//right shift
#include<iostream>
using namespace std;
void shiftArray(int arr[],int n){
    //Store arr[n-1]
    int temp=arr[n-1];
    //Shift->arr[i]=arr[i-1]
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    
    }
    //copy temp into other index
    arr[0]=temp;
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int n=6;

    shiftArray(arr,n);
    //printing the output array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}