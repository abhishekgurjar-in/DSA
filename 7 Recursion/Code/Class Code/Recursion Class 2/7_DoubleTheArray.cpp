#include<bits/stdc++.h>
using namespace std;
void doubleTheArray(int arr[],int size,int index){
    //base case
    if(index>=size) return;
    //processings
    arr[index]*=2;
    //recursivecall
    doubleTheArray(arr,size,index+1);
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int index=0;
    doubleTheArray(arr,size,index);
    for(auto num:arr){
        cout<<num<<" ";
    }
}