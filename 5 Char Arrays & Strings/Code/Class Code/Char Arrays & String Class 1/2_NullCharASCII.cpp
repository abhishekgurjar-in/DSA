
#include<iostream>
using namespace std;
int main(){
char ch[10];//Chat array creation
cin>>ch;//taking input Babbar
cout<<"Printing The value of ch: "<<ch;//print ch
//access charecter arrays element 
cout<<ch[0];
cout<<ch[1];
cout<<ch[2];
cout<<ch[3];
cout<<ch[4];
cout<<ch[5];
cout<<ch[6];//Null Charecter
//null Charecter ASCII CODE
char temp=ch[6];
int value =(int)(temp);
cout<<"Printing Char ASCII CODE: "<<value;
return 0;
}