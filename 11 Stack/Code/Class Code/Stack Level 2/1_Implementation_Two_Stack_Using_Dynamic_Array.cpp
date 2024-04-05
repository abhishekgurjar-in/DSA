#include<iostream>
using namespace std;

class Stack
{
    public:
    int* arr;
    int size;
    int top1;
    int top2;

    Stack(int size){
        this->arr=new int[size];
        this->size=size;
        this->top1=-1;
        this->top2=size;
    }
    void push1(int data){
        if(top2-top1==1){
            cout<<"OVERFLOW"<<endl;
            return;
        }
        else{
            top1++;
            arr[top1]=data;
        }
    }
    void push2(int data){
        if(top2-top1==1){
            cout<<"OVERFLOW"<<endl;
            return;
        }
        else{
            top2--;
            arr[top2]=data;
        }
    }

    void pop1(){
        if(top1==-1){
            cout<<"UNDERFLOW"<<endl;
            return;
        }
        else{
            arr[top1]=0;
            top1--;
        }
    }
    void pop2(){
        if(top2==size){
            cout<<"UNDERFLOW"<<endl;
            return;
        }
        else{
            arr[top2]=0;
            top2++;
        }
    }

    void print(){
        cout<<"Top1:"<<top1<<endl;
        cout<<"Top2: "<<top2<<endl;
        cout<<"Stack: [ ";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"]"<<endl<<endl;
    }
};
int main() {
    Stack stack(5);  // Create a stack with size 5

    stack.push1(1);
    stack.push2(2);
    stack.push1(3);
    stack.push2(4);
    stack.push1(5);

    stack.print();  // Print the current state of the stacks

    stack.pop1();
    stack.pop2();

    stack.print();  // Print the updated state after popping elements

    return 0;
}