#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[5]={1,2,3,4,5};
    int *arr[5];
    for(int i=0;i<5;i++){
    arr[i]=&nums[i];
    cout<<*arr[i]<<endl;
}
}