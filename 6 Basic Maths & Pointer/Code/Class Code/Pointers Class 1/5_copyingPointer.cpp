#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=5;
    int *p=&a;
    int *q=p;
    cout<<a<<endl;
    cout<<&a<<endl;
    // cout<<*a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    cout<<q<<endl;
    cout<<&q<<endl;
    cout<<*q<<endl;
    int *r=q;
    cout<<r<<endl;
    cout<<&r<<endl;
    cout<<*r;
    *p=*q+3;
    cout<<*r<<endl;
    *r=a/2;
    cout<<a<<endl;
}