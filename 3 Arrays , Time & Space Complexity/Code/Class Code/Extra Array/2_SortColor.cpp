// #include<iostream>
// using namespace std;

// void OrganiseArray(int arr[],int size){
//     int left=0;
//     int right=size-1;
//     int index=0;
//     while(index<=right){
//         if(arr[index]==0){
//             swap(arr[index],arr[left]);
//             left++;
//             index++;
//         }
//         else if(arr[index]==2){
//             swap(arr[index],arr[right]);
//             right--;
//         }
//         else{
//             index++;
//         }
//     }
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//     }


// int main() 
// {
// int arr[]={0,1,1,2,2,0,1,2,0};
//         int size=9;
//         OrganiseArray(arr,size);
// }
#include<iostream>
using namespace std;
//LeetCode Sort Colors -75
void OrganiseArray(int arr[],int size){
    int left=0;
    int right=size-1;
    int index=0;
    while(index<=right){
    if(arr[index]==0){
        swap(arr[index],arr[left]);
        left++;
        index++;
    }
     else if(arr[index]==2){
        swap(arr[index],arr[right]);
    right--;
    }
    else{
        index++;
    }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
int arr[]={0,1,1,2,1,2,0,2,1,1};
int size =10;
OrganiseArray(arr,size);
}