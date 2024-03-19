#include<iostream>
using namespace std;

void PassByReference(int &jaadu){
jaadu--;
cout<<jaadu+10<<endl;
}
int main(){
    int sundari=100;
    sundari--;
    sundari-=5;
    PassByReference(sundari);
    cout<<sundari<<endl;
}
