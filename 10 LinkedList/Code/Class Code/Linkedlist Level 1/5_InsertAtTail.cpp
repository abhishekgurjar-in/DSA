#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Parameterized constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Insert node at the head
void InsertAtHead(Node*& head, Node*& tail, int data) {
    if (head == NULL) {
        cout << "Head Reference to Null" << endl;
        // Step 1: Create new Node
        Node* newNode = new Node(data);
        // Step 2: Update head and tail
        head = newNode;
        tail = newNode;
    }
    else {
        // Step 1: Create a new Node
        Node* newNode = new Node(data);
        // Step 2: Attach new Node to head node
        newNode->next = head;
        // Step 3: Update the head
        head = newNode;
    }
}

// Insert node at the tail
void insertAtTail(Node*& head, Node*& tail, int data) {
    if (head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else {
        // Step 1: Create a new Node
        Node* newNode = new Node(data);
        // Step 2: Connect with tail node
        tail->next = newNode;
        // Step 3: Update tail
        tail = newNode;
    }
}

// Print Linked list Function
void printLL(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

// Get The length of LL
int getLength(Node* head) {
    Node* temp = head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    // Create Nodes
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    // Initializing the next pointer
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Create Head Node
    Node* head = first;

    // Print the linked list
    printLL(head);

    // Get the length of the linked list
    int length = getLength(head);
    cout << "Length of the linked list: " << length << endl;

    // Insert a node at the head
    InsertAtHead(head, first, 5);

    // Print the updated linked list
    printLL(head);

    // Insert a node at the tail
    insertAtTail(head, fifth, 60);

    // Print the updated linked list
    printLL(head);

    return 0;
}
