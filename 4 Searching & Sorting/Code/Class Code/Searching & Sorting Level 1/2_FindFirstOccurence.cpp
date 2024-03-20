#include<iostream>
#include<vector>
using namespace std;
int FirstOccurence(vector<int>v,int target){
    int s=0;
    int e=v.size()-1;
    
    int ans= -1;

    while(s<=e){
        int mid=s+(e-s)/2;
        if(target==v[mid]){
            ans=mid;
            e=mid-1;
        }

        
         else if(target<v[mid]){
            e=mid-1;
        }
        else {
        s=mid+1;
        }
       
       
    }
    return ans;
}

int main(){
    vector<int>v{10,20,30,30,30,30,40,50};
    int target=30;
    int ansIndex=FirstOccurence(v,target);
 
    if(ansIndex==-1){
        cout<<"Target Not Found"<<endl;
    }
    else{
        cout<<"Target Found at Index :"<<ansIndex<<endl;
    }
}