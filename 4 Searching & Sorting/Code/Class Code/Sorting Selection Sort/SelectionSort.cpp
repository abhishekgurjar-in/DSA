#include<iostream>
#include<vector>
using namespace std;

//Selection Sort Function
void selectionSort(vector<int>&arr){
    int N=arr.size();
    for(int i=0;i<N-1;i++){
        //lets assume i last index par jo value hai wo hi smallest hai
        int minIndex=i;
        //Step 01:find smallest elemnts index from [0,N-1]
        for(int j=i+1;j<N;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        //Step 02: Swap the ith and minIndex positon Value
        swap(arr[i],arr[minIndex]);
    }
}
int main(){
    vector<int>arr{5,4,3,2,1};
    selectionSort(arr);
    for(auto value :arr){
        cout<<value<<" ";
    }
    return 0;
}