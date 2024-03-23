#include<bits/stdc++.h>
using namespace std;
bool checkSorted(int*arr,int size,int index){
    if(index>=size)return 1;
    if(arr[index]>arr[index-1]){
        bool aageKaAns=checkSorted(arr,size,index+1);
        return aageKaAns;
    }
    else{
        return 0;
    
    }
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=6;
    int index=1;
    bool isSorted=checkSorted(arr,size,index);
    if(isSorted){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array is not Sorted"<<endl;
    }
}