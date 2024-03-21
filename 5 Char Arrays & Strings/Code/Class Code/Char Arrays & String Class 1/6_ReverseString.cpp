#include<iostream>
#include<cstring>
using namespace std;
//find length of String
int findLength(char ch[],int size){
   int index=0;
   while(ch[index]!='\0'){
    index++;
   }
   return index;
}
    //Reverse string with two pointer approach
    void reverseString(char ch[],int size){
        int s=0;
        int e=size-1;
        while(s<=e){
            swap(ch[s],ch[e]);
            s++;
            e--;
        }
    }

    
int main(){
    char ch[100];
    cin>>ch;
    int length=findLength(ch,100);
    reverseString(ch,length);
    cout<<"After Reversing String :"<<ch<<endl; 
    return 0;
}
