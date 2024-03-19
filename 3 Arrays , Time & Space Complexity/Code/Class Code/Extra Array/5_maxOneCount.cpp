#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
//Leetcode Maximum Ones in row 2643
void maxOneCount(vector<vector<int>>mat){
    int i=0;
    int m=mat.size();
    int n=mat[i].size();
    //it will no. of 1;s in each in row
    int oneCount=INT_MIN;
    //it tell which row number has max 1s Count
    int rowNo=0;
    for(int i=0;i<m;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(mat[i][j]==1)
            count++;
        }

    if(count>oneCount){
        oneCount=count;
        rowNo=i;
    }
    }

cout<<"max one count is in row : "<<rowNo<<endl;
cout<<"max one count is : "<<oneCount<<endl;
}
int main(){
    vector<vector<int>>mat{
        {1,1,1,1},
        {0,1,1,1},
        {1,0,0,0}
    };
    maxOneCount(mat);
}

// #include <iostream>
// #include <vector>
// #include<limits.h>
// using namespace std;
// void maxCount(vector<vector<int>> mat)
// {
//     int i = 0;
//     int rowSize = mat.size();
//     int  colSize = mat[i].size();
//     int rowNo = 0;
//     int OneCount = INT_MIN;
//     for (int i = 0; i < rowSize; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < colSize; i++)
//         {
//             if (mat[i][j] == 1)
            
//                 count++;
            
//         }
//         if (count > OneCount)
//         {
//              OneCount=count;
//             rowNo = i;
//         }
//     }
//     cout<<rowNo;
//     cout<<OneCount;
// }
// int main()
// {

//     vector<vector<int>> mat
//     {
//         {0, 1, 0, 1},
//             {0, 1, 1, 1},
//         {  1, 0, 0, 0}
//     };
//     maxCount(mat);
// }
