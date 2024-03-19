// #include<iostream>
// #include<vector>
// #include<algorithm> //header file to include reverse function
// using namespace std;

// void rotate90(vector<vector<int>>mat){
//     int n=mat.size();
//     //transpose
//     for(int i=0;i<n;i++){
//         for(int j=i;j<mat[i].size();j++){
//             swap(mat[i][j],mat[j][i]);
//         }
//     }

// //Reverse
// for(int i=0;i<n;i++){
//     reverse(mat[i].begin(),mat[i].end());
// }
// //printing
// for(int i=0;i<n;i++){
//     for(int j=0;j<mat[i].size();j++){
//         cout<<mat[i][j]<<" ";
//     }
//     cout<<endl;
// }
// }
// int main(){
//     vector<vector<int>>mat{{1,2,3},{4,5,6},{7,8,9}};
//     rotate90(mat);
// }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// leetcode Roatate Image 48 
void rotate90(vector<vector<int>>mat){
    int RowNo=mat.size();
    int ColNo=mat[0].size();
    //Transpose
    for(int i=0;i<RowNo;i++){
        for(int j=i;j<ColNo;j++){
            swap(mat[i][j],mat[j][i]);
        }
        
    }
    // Reverse
    for(int i=0;i<RowNo;i++){
        reverse(mat[i].begin(),mat[i].end());
    }
    //Print
    for(int i=0;i<RowNo;i++){
    for(int j=0;j<ColNo;j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
}
}
int main(){
    vector<vector<int>>mat{{1,2,3},{4,5,6},{7,8,9}};
    rotate90(mat);
}