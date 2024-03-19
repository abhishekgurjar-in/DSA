#include<iostream>
using namespace std;
void DiagonalSum(int arr[3][3],int row,int col){
    int sum=0;
    for(int i=0;i<row;i++){
        sum=sum+arr[i][i];
    }
    cout<<" Diagonal Sum: "<<sum<<endl;
}
int main(){
    int row=3;
    int col=3;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    DiagonalSum(arr,row,col);
}