#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int n=10;
    //Input fro te user
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Printing the Array Double 
    cout<<"Double of the Array"<<endl;
    for(int i=0;i<n;i++){
        cout<<2*arr[i]<<endl;
    }
}