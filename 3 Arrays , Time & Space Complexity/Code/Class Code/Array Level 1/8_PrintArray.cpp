#include<iostream>
using namespace std;
void PrintArray(int arr[5],int n){
    //print Array using Loop
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;//Call function
    PrintArray(arr,n);
    return 0;
}