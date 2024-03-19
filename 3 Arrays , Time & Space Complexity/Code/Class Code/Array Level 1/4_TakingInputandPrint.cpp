#include<iostream>
using namespace std;
int main(){
    int arr[5];
    //Taking input in Array
    int n=5;
    for(int i=0;i<n;i++){
        cout<<"Enter the value of Index : "<<i<<endl;
        cin>>arr[i];

    }
    //Printing The Array
    cout<<"Printing the Array "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}