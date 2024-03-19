#include<iostream>
using namespace std;
//Find All Pairs of The Array 
//Solve using Nested
int PrintPair(int n,int arr[]){
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i]<<","<<arr[j]<<endl;
        }
        cout<<endl;
    }
}
int main(){
    int n=3;
    int arr[]={10,20,30};
   int ans= PrintPair(n,arr);
   cout<<ans<<endl;
}