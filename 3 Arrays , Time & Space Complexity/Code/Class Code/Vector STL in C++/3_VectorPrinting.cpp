#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>v){
    int size=v.size();
    //To find Size of vector
    for(int i=0;i<size;i++){
        //To print the vector
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>v;
//To push insert the element in vector 
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    //Function Call
    print(v);
    }