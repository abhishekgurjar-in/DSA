#include<iostream>
using namespace std;
void PassByReference(int &m){
    m--;
    m*=10;
    cout<<m<<endl;
}
int main(){
    int marks=90;
    marks++;
    PassByReference(marks);
    cout<<marks<<endl;
}