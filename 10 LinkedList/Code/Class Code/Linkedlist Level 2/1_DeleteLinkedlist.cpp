#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Parameterized constructor
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Insert node at the head
void InsertAtHead(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

// Insert node at the tail
void insertAtTail(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

// Print Linked list Function
void printLL(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Get The length of LL
int getLength(Node* head) {
    Node* temp = head;
    int count = 0;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtPosition(int data, int position, Node*& head, Node*& tail) {
    int len = getLength(head);

    if (position == 1) {
        InsertAtHead(head, tail, data);
    } else if (position > len) {
        insertAtTail(head, tail, data);
    } else {
        Node* newNode = new Node(data);
        Node* prev = nullptr;
        Node* curr = head;
        while (position != 1) {
            position--;
            prev = curr;
            curr = curr->next;
        }
        newNode->next = curr;
        prev->next = newNode;
    }
}

// Delete a Node from the head
void deletefromHead(Node*& head, Node*& tail) {
    if (head == nullptr) {
        cout << "Can't delete, because of empty linked list" << endl;
        return;
    }
    if (head == tail) {
        delete head;
        head = nullptr;
        tail = nullptr;
    } else {
        Node* temp = head;
        head = temp->next;
        temp->next = nullptr;
        delete temp;
    }
}

// Function to free memory by deleting all nodes in the linked list
void deleteLinkedList(Node*& head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
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
    InsertAtHead(head, fifth, 5);

    // Print the updated linked list
    printLL(head);

    // Insert a node at the tail
    insertAtTail(head, fifth, 60);

    // Print the updated linked list
    printLL(head);

    // Insert a node at a specific position
    insertAtPosition(25, 3, head, fifth);

    // Print the updated linked list
    printLL(head);

    // Delete a node from the head
    deletefromHead(head, fifth);

    // Print the updated linked list
    printLL(head);

    // Free memory by deleting all nodes in the linked list
    deleteLinkedList(head);

    return 0;
}
