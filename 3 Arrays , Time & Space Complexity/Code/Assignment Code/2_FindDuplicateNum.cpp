//Positioning method
#include<iostream>
using namespace std;
//Leetcode Find Duplicate Number - 287
int findDuplicate(int arr[]){
    while(arr[0]!=arr[arr[0]]){
        swap(arr[0],arr[arr[0]]);
    }
    return arr[0];
}
int main(){
    int arr[]={1,3,4,2,2};
   int ans=findDuplicate(arr) ;
   cout<<"Output : "<<ans;
}