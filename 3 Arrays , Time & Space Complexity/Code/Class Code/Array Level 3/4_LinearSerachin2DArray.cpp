#include<iostream>
using namespace std;
bool searchTarget(int arr[3][3],int row ,int col,int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    int row=3;
    int col=3;
    int target=12;
    int arr[3][3]={
        {23,45,67},
        {12,56,47},
        {43,50,41}
    };
    int ans=searchTarget(arr,row,col,target);
    if(ans==1){
        cout<<"Target "<< target <<" Found"<<endl;
    }
    else{
        cout<<"Not Found";
    }
}