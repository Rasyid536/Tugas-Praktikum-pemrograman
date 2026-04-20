#include <iostream>
#include <vector>
using namespace std;

struct Node {
    string data;
    vector<Node*> children;
};

Node* createNode(string data) {
    Node* node = new Node();
    node->data = data;
    return node;
}

void addChild(Node* parent, Node* child) {
    parent->children.push_back(child);
}

void printTree(Node* root, int level = 0) {
    if (root == NULL) return;

    for (int i = 0; i < level; i++) {
        cout << "--";
    }

    cout << root->data << endl;

    for (int i = 0; i < root->children.size(); i++) {
        printTree(root->children[i], level + 1);
    }
}

int main() {
    // Root
    Node* fire = createNode("Fire");

    // Level 1
    Node* fireball = createNode("Fireball");
    Node* flame = createNode("Flame Burst");
    Node* meteor = createNode("Meteor");

    addChild(fire, fireball);
    addChild(fire, flame);
    addChild(fire, meteor);

    // Level 2
    Node* explosion = createNode("Explosion");
    Node* burn = createNode("Burn");

    addChild(fireball, explosion);
    addChild(fireball, burn);

    // Level 3
    Node* megaExplosion = createNode("Mega Explosion");
    addChild(explosion, megaExplosion);

    // Level 4
    Node* apocalypse = createNode("Apocalypse");
    addChild(megaExplosion, apocalypse);

    cout << "Skill Tree:\n";
    printTree(fire);

    return 0;
}
