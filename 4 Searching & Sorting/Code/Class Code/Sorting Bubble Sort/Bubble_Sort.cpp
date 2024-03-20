#include<iostream>
#include<vector>
using namespace std;
//Bubble Sort Function
void bubbleSort(vector<int>&arr){
    int N=arr.size();

    //Outer Loop
    for(int i=0;i<(N-1);i++){
        //Inner Loop
        for(int j=0;j<(N-i-1);j++){
            //When a>b where a=j and b=j+1 to swap kardo
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    vector<int>arr{5,4,3,2,1};
    bubbleSort(arr);
    for(auto value :arr){
        cout<<value<<" ";
    }
    return 0;
}