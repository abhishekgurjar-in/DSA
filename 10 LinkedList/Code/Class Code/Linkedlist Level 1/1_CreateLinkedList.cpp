#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(){
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
int main(){
    //Create a Node
    //Node* head =new Model();
    //Assigning a value to the Node
    Node* first=new Node(10);
    Node* secound=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    Node* fifth=new Node(50);
    //Intializing The next pointer
    first->next=secound;
    secound->next=third;
    third->next=fourth;
    fourth->next=fifth;
    return 0;
}