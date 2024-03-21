#include<iostream>
#include<cstring>
using namespace std;

//Replace @ with the White Space 
void replaceCharecter(char ch[],int size){
    int index=0;
    while(ch[index]!='\0'){
        if(ch[index]=='@'){
            ch[index]=' ';
        }
        index++;
    }
}

int main(){
    char ch[100];
    cin.getline(ch,100);
    int length=strlen(ch);
    replaceCharecter(ch,length);
    cout<<"After replace to @ : "<<ch<<endl;
    return 0;
}