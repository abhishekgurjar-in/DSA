#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,4,6,8,10};
    int n=5;
    int target=8;
    //0->found
    //1-Not found
    bool flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            //found
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"target found"<<endl;
    }
    else{
        cout<<"target not found"<<endl;
    }
}