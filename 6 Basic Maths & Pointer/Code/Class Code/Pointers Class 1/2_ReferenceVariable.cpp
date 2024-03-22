#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=5;
    int *ptr=&a;
    cout<<"value Stored in Pointer"<<ptr<<endl;
    cout<<"Address of Ptr:"<<&ptr<<endl;
    cout<<"Accesing:"<<*ptr<<endl;
}