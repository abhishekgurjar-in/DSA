#include<iostream>
#include<cstring>
using namespace std;
//find length of String
int findLength(char ch[],int size){
    int length =0;
    for(int i=0;i<size;i++){
        if(ch[i]=='\0'){
            break;
        }
        else{
            length++;
        }
    }
    return length;
}
int main(){
    char ch[100];
    cin>>ch;
    int length=findLength(ch,100);
    cout<<"Length of string via our Method :"<<length<<endl;
    cout<<"Length of string via builtin Method : "<<strlen(ch)<<endl;

    return 0;
}
