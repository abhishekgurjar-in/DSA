#include<iostream>
#include<limits.h>
using namespace std;
//Maximum Number in This Array 
int maxInArray(int arr[],int size){
    int maxAns= INT_MIN;//we use INT_MIN becouse no value is less than INT_MIN value
    for(int i=0;i<size;i++){
  if((arr[i]>maxAns)){
    maxAns=arr[i];
  }
    }
    return maxAns;
}

int main(){
    int arr[]={24,30,59,68,80,90,69,10,19,5};
    int size=10;
    int maximum =maxInArray(arr,size);
    cout<<"Maximum is : "<<maximum<<endl;
    return 0;
}
