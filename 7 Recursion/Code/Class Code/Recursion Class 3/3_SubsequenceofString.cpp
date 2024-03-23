#include<bits/stdc++.h>
using namespace std;
void findsubsequences(string str,string output,int index,vector<string>&ans){
    //base case
    if(index>=str.length()){
        ans.push_back(output);
        return;
    }
    //recursive call
    findsubsequences(str,output,index+1,ans);

    //include
    char ch=str[index];
    output.push_back(ch);
    findsubsequences(str,output,index+1,ans);
}
int main(){
    string str="dsa";
    string output=" ";
    int index=0;
    vector<string>ans;
    findsubsequences(str,output,index,ans);
    for(auto s:ans){
        cout<<"->"<<s<<endl;
    }
}