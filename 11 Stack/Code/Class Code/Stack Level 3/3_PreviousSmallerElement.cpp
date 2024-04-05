#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void prevSmallerElement(int *arr,int &size,vector<int> &ans){
    stack<int>st;
    st.push(-1);

    for(int i=0;i<size;i++){
        int currElement=arr[i];

        while(st.top()>=currElement){
            st.pop();
        }
        ans[i]=st.top();
        st.push(currElement);
    }
}

int main(){
    int arr[5]={8,4,6,2,3};
    int size=5;
    vector<int>ans(size);

    prevSmallerElement(arr,size,ans);

    for(auto element:ans){
        cout<<element<<" ";
    }
    cout<<endl;

    return 0;
}