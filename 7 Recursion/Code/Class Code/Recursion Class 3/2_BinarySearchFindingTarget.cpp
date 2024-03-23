#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>v,int s,int e,int target){
    //base case
    if(s>e){
        return -1;
    }
    //processing ->that 1 case jo khud se solve krna hai 
    int mid=s+(e-s)/2;
    if(v[mid]==target){
        return mid;
    }
    //rest recurrsuon will handle
    if(v[mid]>target){
        return binarySearch(v,s,mid-1,target);
    }
    if(v[mid]<target){
        return binarySearch(v,mid+1,e,target);
    }
}
int main(){
    vector<int>v{10,20,30,40,50,60};
    int s=0;
    int e=v.size()-1;
    int target=40;
    int index=binarySearch(v,s,e,target);
    if(index==-1){
        cout<<"target not found"<<endl;
    }
    else{
        cout<<"TAaget found at index : "<<index<<endl;
    }
}