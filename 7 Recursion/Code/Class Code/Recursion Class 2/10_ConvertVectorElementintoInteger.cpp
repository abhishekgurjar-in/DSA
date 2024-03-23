#include<bits/stdc++.h>
using namespace std;
void printInteger(vector<int>v,int index,int&num){
    //base case
    if(index>=v.size()) return;
    //processing
    num=num*10+v[index];
    //recursive call
    printInteger(v,index+1,num);
}
int main(){
    vector<int>v{2,9,7,4};
    int index=0;
    int num=0;
    printInteger(v,index,num);
    cout<<"number is :";
    cout<<num<<endl;
}