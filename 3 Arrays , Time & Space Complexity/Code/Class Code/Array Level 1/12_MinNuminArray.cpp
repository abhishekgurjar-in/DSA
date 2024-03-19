#include<iostream>
#include<limits.h>
using namespace std;
//Minimum Number in Array
int minInArray(int arr[],int size){
    int minAns= INT_MAX;//To find Minimum Number We Use INT_MAX operator becouse all value are less than this value
    for(int i=0;i<size;i++){
  minAns=min(arr[i],minAns);
    }
    return minAns;
}

int main(){
    int arr[]={24,30,59,68,70,3,69,10,19,5};
    int size=10;
    int minimum =minInArray(arr,size);
    cout<<"Minimum is : "<<minimum<<endl;
    return 0;
}
