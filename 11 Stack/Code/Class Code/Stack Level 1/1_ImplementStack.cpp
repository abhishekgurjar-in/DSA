#include<iostream>
#include<stack>
using namespace std;
int main(){
    //Craete stack
    stack<int>st;
    //Insertion
    st.push(1);
    st.push(2);
    st.push(3);

    //Size of Stack
    cout<<"Size of Stack: "<<st.size()<<endl;
    //Deletion
    st.pop();
    //Check Empty
    if(st.empty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    //top element
    cout<<"Top element: "<<st.top()<<endl;
    return 0;
    
}
