#include<iostream>
using namespace std;
PassByValue(int jaadu){
    jaadu--;
    cout<<jaadu<<endl;
}
int main(){
    int sundari=100;
    sundari--;
    sundari-=5;
    PassByValue(sundari);
    cout<<sundari<<endl;
}