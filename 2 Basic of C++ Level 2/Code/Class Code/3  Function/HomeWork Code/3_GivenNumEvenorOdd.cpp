#include<iostream>
using namespace std;

bool checkEvent(int n){
    if((n&1)==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    bool isEven=checkEvent(n);
    if(isEven){
        cout<<n<<" is Even number"<<endl;
    }
    else{
cout<<n<<"is odd number"<<endl;
    }
}