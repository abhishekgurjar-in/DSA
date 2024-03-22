#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[]={1,2,3};
    int (*ptr)[3]=&nums;
    cout<<(*ptr)[1]<<endl;
    int *ptr2=nums;
    cout<<*(ptr2+2)<<endl;
}