#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v){
    cout<<"Print the Vector "<<endl;
    int size=v.size();
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
}
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        v.push_back(d);

    }
    print(v);
    //for push back more element without asking user
    for(int i=0;i<5;i++){
        v.push_back(6);
    }
    print(v);
}