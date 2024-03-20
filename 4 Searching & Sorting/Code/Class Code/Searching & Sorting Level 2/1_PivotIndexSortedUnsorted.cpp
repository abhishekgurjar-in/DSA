#include<iostream>
#include<vector>
using namespace std;
//Pivot Index Function
int FindPivotIndex(vector<int>nums){
    int n=nums.size();
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        //corner case for single element
        if(s==e){
            return s;
        }
        //Handle separetly condition
        if(mid+1<n&&nums[mid]>nums[mid+1]){
            return mid;
        }
        else if(mid-1>=0&&nums[mid]<nums[mid-1]){
            return mid-1;
        }
        //Apply Binary Search in line B
        else if(nums[s]>nums[mid]){
            e=mid-1;
        }
        //apply binary search in line A
        else{
            s=mid+1;
        }
        //Update mid index
        mid=s+(e-s)/2;
    }
}
int main(){
    vector<int>nums{12,14,16,2,4,6,8,10};
    int pivotIndex=FindPivotIndex(nums);
    cout<<"Maximum Element at Index : "<<pivotIndex<<endl;
}