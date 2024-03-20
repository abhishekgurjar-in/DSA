#include<iostream>
#include<vector>
using namespace std;

//Insertion Sort Function
void insertionSort(vector<int>&arr){
    int N=arr.size();
    for(int i=0;i<N;i++){
        //Key Value =key value se pahle ki all value ko hum compare karte hai key value se hi
        //taki key value ko hum uske right position par rakh paye
        int key=arr[i];
        int j=i-1;
        //move element of arr[0,i-1] that are graeter than key to one position ahead of there current position
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        //Insert key at right index /position (insertion)
        arr[j+1]=key;
    }
}
int main(){
    vector<int>arr{5,4,3,1,2};
    insertionSort(arr);
    for(auto value :arr){
        cout<<value <<" ";

    }
    return 0;
}