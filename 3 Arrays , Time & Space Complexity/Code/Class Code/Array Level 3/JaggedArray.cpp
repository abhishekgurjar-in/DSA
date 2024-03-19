#include<iostream>
#include<vector>
using namespace std;
int main(){
    //2D Vector
    vector<vector<int>>v;
    //1D Vector
    vector<int>v1(1,1);
     vector<int>v2(2,2);
      vector<int>v3(3,3);
//push back 1D vector in 2D vector
      v.push_back(v1);
      v.push_back(v2);
      v.push_back(v3);

      for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
      }
}