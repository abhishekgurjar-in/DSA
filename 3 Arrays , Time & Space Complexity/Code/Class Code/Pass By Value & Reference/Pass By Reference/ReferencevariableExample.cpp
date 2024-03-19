#include<iostream>
using namespace std;
int main(){
    int a=5;
    int &b=a;
    int &c=b;
    a++;
    b+=2;
    c*=10;
    cout<<a<<" "<<b<<" "<<c<<" ";
}