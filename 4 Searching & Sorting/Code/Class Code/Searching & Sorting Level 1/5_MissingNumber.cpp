
#include<iostream>
using namespace std;

int findMissingElement(int v[], int n) {
  int s = 0;
  int e = n-1;
  int mid = s + (e-s)/2;
  int ans = -1;

  while(s <= e) {
    int diff = v[mid] - mid;

    if(diff == 1) {
      //right me jao
      s = mid+1;
    }
    else {
      //ans store
      ans = mid;
      //left me jao
      e = mid - 1;
    }
     mid = s + (e-s)/2;
  }


  //HW -> How can we remove this, by modifying the above logic
  if(ans +1 == 0)
    return n+1;
  
  return ans+1;
}

int main(){
    int v[]={1,2,3,4,5,6,7,9};
    int n=8;
    int missing=findMissingElement(v,n);
    cout<<"Missing Number is : "<<missing<<endl;
}
//Optimise code for GFG
// class Solution{
//   public:
//     int missingNumber(vector<int>& array, int n) {
//         // Your code goes here
//          int expectedSum = (n * (n + 1)) / 2;
//         int actualSum = 0;
        
//         for (int num : array) {
//             actualSum += num;
//         }
        
//         return expectedSum - actualSum;
    
//     }
// };