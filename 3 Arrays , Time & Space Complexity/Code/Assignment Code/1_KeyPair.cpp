#include<iostream>
#include<algorithm>
using namespace std;
//Key Pair GFG
     bool twoSum2pointerApproach(int arr[], int n, int x) {
        int l = 0;
        int h = n - 1;
        while (l < h) {
            int csum = arr[l] + arr[h];
            if (csum == x)
                return true;
            else if (csum > x)
                h--;
            else
                l++;
        }
        return false;
    }

    
        bool hasArrayTwoCandidates(int arr[], int n, int x) {
        // Sort the array
        std::sort(arr, arr + n);
        return twoSum2pointerApproach(arr, n, x);
    }

int main(){
    int arr[]={1,4,6,8,10,45};
    int n=6;
    int x=16;
    int solution=hasArrayTwoCandidates(arr,n,x);
    if(solution){
cout<<"Array has two elements with sum " <<solution<<endl;
    }
    else{
cout<<"Array doesn't have two elements with sum"<<endl;
    }
    return 0;
}
    

