#include<iostream>
#include<stack>
using namespace std;
void insertSorted(stack<int> &st,int &element){
    //base case
    if(st.empty()||element>st.top()){
        //insert element
        st.push(element);
        return;
    }
    //1 case hum solve kar lenge
    int temp=st.top();
    st.pop();
    //recursion call
    insertSorted(st,element);
    //Backtracking
    st.push(temp);
}