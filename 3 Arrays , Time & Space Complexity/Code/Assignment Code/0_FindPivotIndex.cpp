//Bruteforce Time  complexity is high

// #include<iostream>
// #include<vector>
// using namespace std;
// //LeetCode Find Pivot Index -724
// int findPivotIndex(int nums[], int size){
//     for(int i=0; i<size; i++){
//         int lsum = 0;
//         int rsum = 0;
        
//         for(int j=0; j<i; j++){
//             lsum += nums[j];
//         }
        
//         for(int j=i+1; j<size; j++){  // Fix the loop condition here
//             rsum += nums[j];
//         }
        
//         if(lsum == rsum) return i;
//     }
//     return -1;
// }

// int main(){
//     int nums[6] = {1, 7, 3, 6, 5, 6};
//     int size = sizeof(nums) / sizeof(nums[0]);  // Calculate the size of the array

//     int pivotIndex = findPivotIndex(nums, size);

//     if(pivotIndex != -1){
//         cout << "Pivot index found at: " << pivotIndex << endl;
//     } else {
//         cout << "No pivot index found." << endl;
//     }

//     return 0;
// }


//Optimized 
#include<iostream>
#include<vector>
using namespace std;
//LeetCode Find Pivot Index -724
int findPivotIndex(vector<int> nums){
    vector<int> lsum(nums.size(), 0);
    vector<int> rsum(nums.size(), 0);

    // Calculate lsum
    for(int i = 1; i < nums.size(); i++){
        lsum[i] = lsum[i-1] + nums[i-1];
    }

    // Calculate rsum
    for(int i = nums.size() - 2; i >= 0; i--){
        rsum[i] = rsum[i+1] + nums[i+1];
    }

    for(int i = 0; i < nums.size(); i++){
        if(lsum[i] == rsum[i]){
            return i;
        }
    }

    return -1;
}

int main(){
    vector<int> nums = {1, 7, 3, 6, 5, 6};

    int pivotIndex = findPivotIndex(nums);

    if(pivotIndex != -1){
        cout << "Pivot index found at: " << pivotIndex << endl;
    } else {
        cout << "No pivot index found." << endl;
    }

    return 0;
}
