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

void deleteByValue(int key) {
 if (head == nullptr) {
 cout << "List kosong.\n";
 return;
 }
 // Jika head adalah key
 if (head->data == key) {
 Node* temp = head;
 head = head->next;
 delete temp;
 cout << "Node dengan nilai " << key << " dihapus.\n";
 return;
 }
 Node* prev = head;
 Node* curr = head->next;
 while (curr != nullptr && curr->data != key) {
 prev = curr;
 curr = curr->next;
 }
 if (curr == nullptr) {
 cout << "Nilai tidak ditemukan.\n";
 return;
 }
 prev->next = curr->next;
 delete curr;
 cout << "Node dengan nilai " << key << " dihapus.\n";
}

int main() {

 insertFront(30);
 insertFront(20);
 insertFront(10);
 insertBefore(20, 15);
 insertAfter(20, 25);
 deleteByValue(15);
 Node* temp = head;
 while (temp != nullptr) {
 cout << temp->data << " → ";
 temp = temp->next;
 }
 cout << "NULL\n";
}
