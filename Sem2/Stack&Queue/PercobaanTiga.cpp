#include <iostream>
using namespace std;

#define MAX 5

class CircularQueue {
private:
    int front;
    int rear;
    int data[MAX];

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return (rear + 1) % MAX == front;
    }

    bool isEmpty() {
        return front == -1;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue penuh\n";
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        }
        else {
            rear = (rear + 1) % MAX;
        }

        data[rear] = value;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue kosong\n";
            return;
        }

        cout << "Data keluar: " << data[front] << endl;

        if (front == rear) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % MAX;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue kosong\n";
            return;
        }

        int i = front;
        cout << "Isi Queue:\n";

        while (true) {
            cout << data[i] << endl;

            if (i == rear)
                break;

            i = (i + 1) % MAX;
        }
    }
};

int main() {
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();

    q.display();
}
