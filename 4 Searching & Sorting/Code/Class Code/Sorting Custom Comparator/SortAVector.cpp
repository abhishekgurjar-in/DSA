#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;
//Printing Method
void print(vector<int>&v){
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";

    }
    cout<<endl;
    }

    //Custom Comparator ki return value always true ya false hoto hai 
    bool myComparator1(int &a,int &b){
        return a>b;//Decreasing order sorting
    }
    bool myComparator2(int &a,int &b){
        return a<b; //Increasing order sorting
    }
    int main(){
        vector<int>v={44,55,22,11,33};
        
        cout<<"Vector"<<endl;
        print(v);

        cout<<"Incresing order sorting by default"<<endl;
        sort(v.begin(),v.end());
        print(v);

        cout<<"Decreasing order sorting by deafault by my comparator 1"<<endl;
        sort(v.begin(),v.end(),myComparator1);
        print(v);

        cout<<"Increasing Order sorting by my compartaor 2"<<endl;
        sort(v.begin(),v.end(),myComparator2);
        print(v);

        return 0;
    }