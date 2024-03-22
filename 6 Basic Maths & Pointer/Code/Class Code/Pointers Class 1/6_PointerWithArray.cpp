#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    int*ptr=arr;
    cout<<arr;
    cout<<&arr;
    cout<<&arr[0];
    cout<<&arr[0];
    cout<<*arr;
    cout<<*arr+1;
    cout<<*(arr)+1;
    cout<<*(arr+1);
    cout<<*(arr+2);
    cout<<*(arr+3);
    cout<<*(arr+0);
    cout<<arr+0;
    cout<<(arr+0);
}