#include <iostream>
using namespace std;
struct Node {
 int data;
 Node* next;
};

Node* head = nullptr;

void insertAfter(int key, int value) 
{
 Node* temp = head;
 while (temp != nullptr && temp->data != key)
    temp = temp->next;

 if (temp == nullptr) return;
 Node* newNode = new Node;
 newNode->data = value;
 newNode->next = temp->next;
 temp->next = newNode;
}

void insertFront(int value) {
 Node* newNode = new Node;
 newNode->data = value;
 newNode->next = head;
 head = newNode;
}

void insertBefore(int key, int value) 
{
 if (head == nullptr) return;
 if (head->data == key) {
    insertFront(value);
    return;
 }
 Node* prev = nullptr;
 Node* curr = head;
 while (curr != nullptr && curr->data != key) {
 prev = curr;
 curr = curr->next;
 }

 if (curr == nullptr) return;
 Node* newNode = new Node;
 newNode->data = value;
 prev->next = newNode;
 newNode->next = curr;
}
int main() {

 insertFront(30);
 insertFront(20);
 insertFront(10);
 insertBefore(20, 15);
 insertAfter(20, 25);
 Node* temp = head;
 while (temp != nullptr) {
 cout << temp->data << " → ";
 temp = temp->next;
 }
 cout << "NULL\n";
}
