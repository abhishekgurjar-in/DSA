#include<iostream>
using namespace std;
#include<vector>
void printVec(vector<int>v){
    cout<<" Print The vector "<<endl;
    int size=v.size();
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    //To push or insert the elements in vector 
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

      printVec(v);

    //To pop or remove the elements from Vector
    v.pop_back();
    printVec(v);

    v.pop_back();
    printVec(v);
}