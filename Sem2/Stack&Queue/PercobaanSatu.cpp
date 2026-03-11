#include <iostream>
using namespace std;

#define MAX 5

class Stack {
private:
    int top;
    string data[MAX];

public:
    Stack() {
        top = -1;
    }

    bool isFull() {
        return top == MAX - 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(string item) {
        if (isFull()) {
            cout << "Inventory penuh!\n";
            return;
        }
        top++;
        data[top] = item;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Inventory kosong!\n";
            return;
        }
        cout << "Item digunakan: " << data[top] << endl;
        top--;
    }

    void peek() {
        if (isEmpty()) {
            cout << "Inventory kosong\n";
            return;
        }
        cout << "Item terakhir: " << data[top] << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Inventory kosong\n";
            return;
        }
        cout << "Isi Inventory:\n";
        for (int i = top; i >= 0; i--) {
            cout << data[i] << endl;
        }
    }
};

int main() {
    Stack inventory;

    inventory.push("Potion");
    inventory.push("Sword");
    inventory.push("Shield");

    inventory.display();

    inventory.pop();

    inventory.display();
}
