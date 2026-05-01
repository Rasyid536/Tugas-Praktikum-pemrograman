#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;
};

Node* createNode(char data) {
    Node* node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// PREORDER
void preorder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    Node* A = createNode('A');
    Node* B = createNode('B');
    Node* C = createNode('C');
    Node* D = createNode('D');
    Node* E = createNode('E');

    A->left = B;
    A->right = C;
    B->left = D;
    B->right = E;

    cout << "Preorder: ";
    preorder(A);

    return 0;
}
