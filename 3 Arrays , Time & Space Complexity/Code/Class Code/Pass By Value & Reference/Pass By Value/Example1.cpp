#include<iostream>
using namespace std;
PassByValue(int a){
    a--;
    a/=7;
    cout<<a<<endl;
}
int main(){
int a=9;
a++;
a*=5;
PassByValue(a);
cout<<a<<endl;
}
