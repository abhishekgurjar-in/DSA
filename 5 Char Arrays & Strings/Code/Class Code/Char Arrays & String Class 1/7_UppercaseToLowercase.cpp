#include<iostream>
#include<cstring>
using namespace std;

//LowerCAse to UperCAse
void convertTOuppercase(char ch[],int size){
    int index=0;
    while(ch[index]!='\0'){
        if(ch[index]>='a'  && ch[index]<='z'){
            ch[index]=ch[index]-'a'+'A';
        }
        index++;
    }
}
    //UpperCAse to LowerCAse
    void convertToLowercase(char ch[],int size){
        int index=0;
        while(ch[index]!='\0'){
            if(ch[index]>='A' && ch[index]<='Z'){
                ch[index]=ch[index]-'A'+'a';
            }
            index++;
        }
    }

int main(){
    char ch[100];
    cin.getline(ch,100);
    int length=strlen(ch);
    convertTOuppercase(ch,length);
    cout<<"After converting to uppercase : "<<ch<<endl;
    
    convertToLowercase(ch,length);
    cout<<"After converting to lowercase : "<<ch<<endl;
    return 0;
}