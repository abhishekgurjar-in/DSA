#include<iostream>
using namespace std;
#include<limits.h>
int printMax(int arr[3][3],int row,int col){
    int max=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    return max;
}
int main(){
    int arr[3][3]{{45,5,670},{23,80,4000},{11,78,84}};
    int row=3;
        int col=3;
    int finalAns=printMax(arr,row,col);
    cout<<"maximum is "<<finalAns<<endl;
    
}