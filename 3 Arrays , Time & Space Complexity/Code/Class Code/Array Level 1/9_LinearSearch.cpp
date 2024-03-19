#include<iostream>
using namespace std;
//Linear Search Target
bool LinearSearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[5]={2,4,6,8,10};
    int n=5;
    int target=6;
    bool ans=LinearSearch(arr,n,target);
if(ans==true){
    cout<<" Target Found"<<endl;
}
else{
    cout<<"Not found"<<endl;
}
}