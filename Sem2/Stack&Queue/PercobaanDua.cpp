#include <iostream>
using namespace std;

#define MAX 10

class Stack
{
private:
    int top;
    string command[MAX];

public:
    Stack()
    {
        top = -1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    void push(string cmd)
    {
        if (top == MAX - 1)
        {
            cout << "Command penuh\n";
            return;
        }

        top++;
        command[top] = cmd;
    }

    void undo()
    {
        if (isEmpty())
        {
            cout << "Tidak ada command untuk undo\n";
            return;
        }

        cout << "Undo command: " << command[top] << endl;
        top--;
    }

    void show()
    {
        cout << "History Command:\n";
        for (int i = top; i >= 0; i--)
        {
            cout << command[i] << endl;
        }
    }
};

int main()
{
    Stack action;

    action.push("Move Forward");
    action.push("Jump");
    action.push("Shoot");

    action.show();

    action.undo();

    action.show();

    action.push("Attack");
    action.undo();

    action.show();
}
