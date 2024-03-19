#include<iostream>
using namespace std;
//Unique Element 
//Solve Using XOR Opeartion
int getUnique(int arr[],int n){
    int ans=0;
    //we can done XOR operation with values and same values are eliminate and unique value XOR with O 
    //XOR with 0 give  the value that we done XOR so ans varaible only store unique value
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[]={2,10,13,10,11,11,2,7,13,15,15};
    int n=11;
    int FinalAns=getUnique(arr,n);
    cout<<"Final answer : "<<FinalAns<<endl;
}