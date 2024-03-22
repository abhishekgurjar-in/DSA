#include<bits/stdc++.h>
using namespace std;
int countPrimes(vector<bool>&prime,int n){
    if(n==0){
        return 0;
    }
    //handling 0 and 1 separetly as they are non prime
    prime[0]=prime[1]=false;
    int count=0;
    for(int i=2;i<n;i++){
     
            if(prime[i]){
                count++;
            }
            int j=2*i;
            while(j<n){
                prime[j]=false;
                j+=i;
            }
        }

        return count; 
    }

    
        int main(){
            int n=21;
            vector<bool>prime(n,true);
            int countIs=countPrimes(prime,n);
            cout<<countIs<<endl;
        }
    
