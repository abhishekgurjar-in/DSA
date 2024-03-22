#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=5;
    int *ptr=&a;
    cout<<"size:"<<sizeof(ptr)<<endl;
    char ch='N';
    char *cptr=&ch;
    cout<<"size:"<<sizeof(cptr)<<endl;
    bool flag=1;
    bool *bptr=&flag;
    cout<<"Size:"<<sizeof(bptr)<<endl;
}