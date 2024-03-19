#include<iostream>
using namespace std;
PassByValue(int m){
    m--;
    m*=10;
    cout<<m<<endl;
}
int main(){
    int marks=90;
    marks++;
    PassByValue(marks);
    cout<<marks<<endl;
}