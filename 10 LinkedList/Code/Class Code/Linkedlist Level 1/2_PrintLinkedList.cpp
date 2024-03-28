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
//Print Linked list Function
void printLL(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
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
    //Create Head Node
    Node* head=first;
    printLL(head);
    return 0;
}