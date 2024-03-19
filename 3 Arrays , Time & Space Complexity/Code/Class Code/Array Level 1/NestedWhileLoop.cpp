#include<iostream>
using namespace std;
//Nest loop
int main(){
int i=0;
//loop ke andar loop
while(i<2){
    cout<<endl<<"Outer Loop "<<i<<endl<<endl;
    i++;
int j=0;
while(j<2){
    cout<<"inner loop "<<j<<endl;
    j++;
}
}
}