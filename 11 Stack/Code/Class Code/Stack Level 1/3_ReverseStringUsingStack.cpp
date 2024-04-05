#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
    string str="BABBAR";
    stack<char>st;
    //Step 1:Push each charecter of string int stack
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        st.push(ch);
    }
    //step 2: pop element from stack 
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}