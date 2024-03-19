#include<iostream>
using namespace std;
int printArray(int arr[2][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"row index : "<<i<<" "<<"column index : "<<j<<endl;
            cin>>arr[i][j];
        }
    }
}
int main(){
    int row=2;
    int col=3;
    int arr[2][3];
    printArray(arr,row,col);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}