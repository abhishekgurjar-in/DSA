#include<iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"Enter Two Number"<<endl;
    cin>>a>>b;
    int op;
    cout<<"What Operation you Want"<<endl;
    cin>>op;
    float ans=0;
    //op ->add, 1->sub,2->*,3->divide,invalid operation

    switch(op){
        case 0:
        cout<<"Add case"<<endl;
        ans=a+b;
        break;
        case 1:
        cout<<"Sub Case"<<endl;
        ans=a-b;
        break;
        case 2:
        cout<<"Mul Case"<<endl;
        ans=a*b;
        break;
        case 3:
        cout<<"div case"<<endl;
        ans=a/b;
        break;
        default:
        cout<<"Invalid Operation"<<endl;
    }
    cout<<"Your Answer id: "<<ans<<endl;
    return 0;
}