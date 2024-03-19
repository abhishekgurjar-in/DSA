#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int>v;
    while(1){
        int data;
        cin>>data;
         v.push_back(data);
         cout<<"Capacity "<<v.capacity()<<" "<<"Size "<<v.size()<<endl;
    }
}