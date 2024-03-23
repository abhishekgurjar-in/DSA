#include<bits/stdc++.h>
using namespace std;
void maximum(int*arr,int size,int index,int&maxi){
    //base case
    if(index>=size) return ;
    //processing
    maxi=max(maxi,arr[index]);
    //recursive call
    maximum(arr,size,++index,maxi);
}
int main(){
    int arr[]={10,40,30,50,20};
    int size=5;
    int index=0;
    int maxi=INT_MIN;
    maximum(arr,size,index,maxi);
    cout<<maxi<<endl;
}
