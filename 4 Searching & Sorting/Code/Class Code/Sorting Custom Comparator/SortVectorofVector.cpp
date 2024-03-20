#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

//Printing Method

void print(vector<vector<int>>&v){
    for(int i=0;i<v.size();++i){
        vector<int>&temp=v[i];
        int a=temp[0];
        int b=temp[1];
        cout<<a<<" "<<b<<endl;
    }
    cout<<endl;
}

//Custom Comparator ki return Value always true ya false hoti hai 
bool myComparator1(vector<int>&a,vector<int>&b){
    return a[0]>b[0]; //Decreasing order sorting by 1st index
}
bool myComparator2(vector<int>&a,vector<int>&b){
    return a[1]>b[1];//decrasing order sorting by 2nd index
}
int main(){
    //vector of vector sorting 
    vector<vector<int>>v;
    int n;
    cout<<"Enter Size:\n";
    cin>>n;
    //Taking Input from user in 2D Vector 
    for(int i=0;i<n;i++){
        int a,b;
        cout<<"Enter a,b"<<endl;
        cout<<a<<b;
        //craetion of 1D vector temp
        vector<int>temp;
        //inserting element a at 0th and b at 1st index in 1D Vector 
        temp.push_back(a);
        temp.push_back(b);

        //Inserting 1D vector temp in 2D vector v
        v.push_back(temp);
    }
    cout<<"Here are the values"<<endl;
    print(v);

    cout<<"Sorted by 1st Index"<<endl;
    sort(v.begin(),v.end(),myComparator1);
    print(v);

    cout<<"Sorted by 2nd Index"<<endl;
    sort(v.begin(),v.end(),myComparator2);
    print(v);

    return 0;
}