#include <iostream>
using namespace std;
struct Node {
 int data;
 Node* next;
};

Node* head = nullptr;

void insertFront(int value) {
 Node* newNode = new Node;
 newNode->data = value;
 newNode->next = head;
 head = newNode;
}

int main() {

 insertFront(10);
 insertFront(20);
 insertFront(30);

 Node* temp = head;
 while (temp != nullptr) {
 cout << temp->data << " → ";
 temp = temp->next;
 }
 cout << "NULL\n";
}
