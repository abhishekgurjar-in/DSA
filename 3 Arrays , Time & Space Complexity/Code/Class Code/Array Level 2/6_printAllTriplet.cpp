#include<iostream>
using namespace std;
void PrintPair(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
for(int k=0;k<n;k++){
    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<endl;;
}
        }
    }
}
int main(){
    int arr[]={10,20,30};
    int n=3;
    PrintPair(arr,n);
}