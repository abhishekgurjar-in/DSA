#include<iostream>
using namespace std;
void printArray(int arr[][4],int row,int col){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int row=3;
    int col=4;
    int arr[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    printArray(arr,row,col);
}