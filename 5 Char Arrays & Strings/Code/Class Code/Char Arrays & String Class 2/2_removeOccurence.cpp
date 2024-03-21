#include<bits/stdc++.h>
using namespace std;
string removeSubstring(string &s,string &part){
    while(s.find(part)!=string::npos){
        //if inside the loop it means
        //sub-string part in string s
        //thats why erase the sub string
        s.erase(s.find(part),part.length());

    }
    return s;
}
int main(){
    string s="axxxxyyyyz";
    string part ="xy";
    string final=removeSubstring(s,part);
    cout<<final;
}