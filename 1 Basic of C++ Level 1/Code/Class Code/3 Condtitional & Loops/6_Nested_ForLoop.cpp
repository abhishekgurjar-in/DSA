#include<iostream>
using namespace std;
int main(){
    //Nested for Loop
    for(int i=0;i<2;i++){
        cout<<endl<<"Outer loop "<<i<<endl<<endl;

        for(int j=0;j<2;j++){
            cout<<"Inner loop "<<j<<endl;
        }
    }
}