#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node* prev;
  Node* next;

  Node() {
    this->prev = NULL;
    this->next = NULL;
  }

  Node(int data) {
    this->data = data;
    this->prev = NULL;
    this->next = NULL;
  }
};

int findLength(Node* &head);

void print(Node* head) {
  Node* temp = head;

  while (temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

void insertAtHead(Node* &head, Node* &tail, int data) {
  if (head == NULL) {
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
  } else {
    Node* newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
  }
}

void insertAtTail(Node* &head, Node* &tail, int data) {
  if (head == NULL) {
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
  } else {
    Node* newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
  }
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position) {
  if (head == NULL) {
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
  } else {
    int len = findLength(head);
    if (position == 1) {
      insertAtHead(head, tail, data);
    } else if (position == len + 1) {
      insertAtTail(head, tail, data);
    } else {
      Node* newNode = new Node(data);
      Node* prevNode = NULL;
      Node* currNode = head;
      while (position != 1) {
        position--;
        prevNode = currNode;
        currNode = currNode->next;
      }
      prevNode->next = newNode;
      newNode->prev = prevNode;
      newNode->next = currNode;
      currNode->prev = newNode;
    }
  }
}

int findLength(Node* &head) {
  Node* temp = head;
  int len = 0;

  while (temp != NULL) {
    len++;
    temp = temp->next;
  }
  return len;
}

int main() {
  Node* head = NULL;
  Node* tail = NULL;

  insertAtHead(head, tail, 40);
  insertAtHead(head, tail, 30);
  insertAtHead(head, tail, 20);
  insertAtHead(head, tail, 10);

  cout << "Linked List: ";
  print(head);

  insertAtTail(head, tail, 50);
  insertAtTail(head, tail, 60);

  cout << "Linked List after insertion at tail: ";
  print(head);

  insertAtPosition(head, tail, 25, 3);

  cout << "Linked List after insertion at position 3: ";
  print(head);

  cout << "Length of LL is: " << findLength(head) << endl;

  return 0;
}
