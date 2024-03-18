#include<iostream>
using namespace std;
void printAllDigits(int n){
    while(n){
        int  onePlaceDigit=n%10;
        cout<<"digit: "<<onePlaceDigit<<endl;
        n/=10;
    }
}
int main(){
    int n;
    cout<<"Enter Number to see its digits"<<endl;
    cin>>n;
    printAllDigits(n);
    }