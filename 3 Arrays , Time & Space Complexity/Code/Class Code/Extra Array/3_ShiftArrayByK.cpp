// #include<iostream>
// using namespace std;
// void shiftArray(int arr[],int n){
//     int brr[6];
//     int k;
//     cin>>k;
//     int newIndex=0;
//     for(int index=0;index<n;index++){
//         newIndex=(index+k)%n;
//         brr[newIndex]=arr[index];
//     }
//     for(int i=0;i<n;i++){
//         cout<<brr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={10,20,30,40,50,60};
//     int n=6;
//     shiftArray(arr,n);
// }
#include<iostream>
using namespace std;
//LeetCode Rotate Array 189
void ShiftArray(int arr[],int n){
    int brr[6];
    int k;
    cin>>k;
    int newIndex=0;
    for(int index=0;index<n;index++){
        newIndex=(index+k)%n;
        brr[newIndex]=arr[index];
    }
    for(int i=0;i<n;i++){
        cout<<brr[i]<<" ";
    }
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int n=6;
    ShiftArray(arr,n);
}