#include<iostream>
#include<cstring>
using namespace std;
int main(){
    //Creating of String
    string name;

    //Taking Input in string 
    getline(cin,name);

    //Access By Index
    cout<<"Print first Charecter : "<<name[0]<<endl;
cout<<"Print last charecter : "<<name[name.length()-1]<<endl;
}