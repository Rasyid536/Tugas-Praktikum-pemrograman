#include <iostream>
using namespace std;
struct Node {
 int data;
 Node* next;
};

Node* head = nullptr;

void insertBack(int value) 
{
 Node* newNode = new Node;
 newNode->data = value;
 newNode->next = nullptr;
 if (head == nullptr) 
 {
 head = newNode;
 return;
 }
 Node* temp = head;
 while (temp->next != nullptr)
 temp = temp->next;
 temp->next = newNode;
}

int main() {

 insertBack(10);
 insertBack(20);
 insertBack(30);

 Node* temp = head;
 while (temp != nullptr) {
 cout << temp->data << " → ";
 temp = temp->next;
 }
 cout << "NULL\n";
}
