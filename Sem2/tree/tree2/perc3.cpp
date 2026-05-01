#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// INSERT BST
Node* insert(Node* root, int data) {
    if (root == NULL)
        return createNode(data);
        
    if (data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);
        
    return root;
}

// INORDER (untuk cek urutan)
void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);

    cout << "Inorder (sorted): ";
    inorder(root);
    cout << endl;

    return 0;
}
