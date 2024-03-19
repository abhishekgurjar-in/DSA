#include<iostream>
using namespace std;
void printRowSum(int arr[4][3],int row,int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
        cout<<"Sum for "<<" row "<<i<<" is : "<<sum<<endl;
    }
}
int main(){
    int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row=4;
    int col=3;

printRowSum(arr,row,col);
}