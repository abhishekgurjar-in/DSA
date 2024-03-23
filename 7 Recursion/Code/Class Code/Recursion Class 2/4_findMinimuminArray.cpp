#include<bits/stdc++.h>
using namespace std;
void minimum(int *arr,int size,int index,int &mini){
    //base case
    if(index>=size) return;
    //processing
    mini=min(mini,arr[index]);
    //recursive call
    minimum(arr,size,++index,mini);
}

int main(){
    int arr[]={40,30,10,50,20};
    int size=5;
    int index=0;
    int mini=INT_MAX;
    minimum(arr,size,index,mini);
    cout<<mini<<endl;
}