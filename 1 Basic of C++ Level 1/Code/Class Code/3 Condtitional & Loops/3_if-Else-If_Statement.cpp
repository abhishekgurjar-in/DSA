#include<iostream>
using namespace std;
int main(){
    //if else if Statement
    int age =21;
    if(age>+15.5 && age <+18.5){
        cout<<"Eligible for NDA "<<endl;
    }
    else if(age>=20 && age<=25){
        cout<<"eligible for CDS & AFCAT"<<endl;
    }
    else{
        cout<<"Not eligible "<<endl;
    }
}