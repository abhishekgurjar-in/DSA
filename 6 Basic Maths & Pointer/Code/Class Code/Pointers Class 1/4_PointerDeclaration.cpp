#include<bits/stdc++.h>
using namespace std;
int main(){
    // int a=100;
    // int *ptr=&a;
    // a=a+1;
    // ptr=ptr+1;
    // cout<<a<<" "<<ptr;
  
//   int a=100;
//   int *ptr=&a;
//   a=a+1;
//   cout<<a<<endl;
//   *ptr=*ptr+1;
//   cout<<*ptr<<endl;

int a=100;
int *ptr=&a;
cout<<a<<endl;
cout<<&a<<endl;
cout<<*ptr<<endl;
cout<<ptr<<endl;
cout<<&ptr<<endl;
(*ptr)++;
cout<<(*ptr)<<endl;
++(*ptr);
cout<<(*ptr)<<endl;
(*ptr)=(*ptr)/2;
cout<<(*ptr)<<endl;
*ptr+*ptr-2;
cout<<*ptr<<endl;
}