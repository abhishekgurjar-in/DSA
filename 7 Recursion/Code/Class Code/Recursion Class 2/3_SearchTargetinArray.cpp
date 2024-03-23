#include<bits/stdc++.h>
using namespace std;
bool findTarget(int arr[],int size,int target,int index){
    //base case
    if(index>=size) return 0;
    //agr target 1st index per mil jaye to usko base case mai le liya kyuki jha par
    //target mil jaye vha par ek type se rukna hai
    if(arr[index]==target) return 1;
    //recursive call ,rest array traversal recursion kardega 
    bool aageKaAns=findTarget(arr,size,target,index+1);
    bool aagekaAns;

}
int main(){
    int arr[]={10,20,30,40,50};
    int target=40;
    int index=0;
    int size=5;
    cout<<"targetfound or not: "<<findTarget (arr,size,target,index);
}