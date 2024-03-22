#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=10;
    int *p=&a;
    int **q=&p;
    int **r=&p;
    int ***s=&q;
    cout<<*s<<endl;
    cout<<**r<<endl;
    cout<<***s<<endl;
    cout<<*q<<endl;
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<&s<<endl;
    cout<<&r<<endl;
    cout<<&q<<endl;
    cout<<**s+1<<endl;
}
