#include<iostream>
#include<vector>
using namespace std;
void WaveMatrix(vector<vector<int>>v){
    int m=v.size();
    int n=v[0].size();
    for(int StartCol=0;StartCol<n;StartCol++){
        if((StartCol & 1)==0){
            for(int i=0;i<m;i++){
                cout<<v[i][StartCol]<<" ";
            }
        }
        else{
            for(int i=m-1;i>0;i--){
                cout<<v[i][StartCol]<<" ";
            }
        }
    }
}
int main(){
    vector<vector<int>>v{
        {1,2,3,4},
        {5,6,7,8,},
        {9,10,11,12}
    };
    WaveMatrix(v);
    return 0;
}