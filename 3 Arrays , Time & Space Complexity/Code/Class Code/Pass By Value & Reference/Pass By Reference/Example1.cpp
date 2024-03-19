#include<iostream>
using namespace std;
void PassByReference(int &b){
    b--;
    cout<<b+5<<endl;
}
int main(){
    int a=9;
    a++;
    PassByReference(a);
    cout<<a<<endl;
}