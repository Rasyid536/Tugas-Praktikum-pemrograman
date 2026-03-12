#include <iostream>
using namespace std;

#define MAX 4

class EnemyQueue {
private:
    int front;
    int rear;
    string enemy[MAX];

public:
    EnemyQueue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    void enqueue(string e) {
        if ((rear + 1) % MAX == front) {
            cout << "Spawn queue penuh\n";
            return;
        }

        if (isEmpty())
            front = rear = 0;
        else
            rear = (rear + 1) % MAX;

        enemy[rear] = e;
    }

    void spawnEnemy() {
        if (isEmpty()) {
            cout << "Tidak ada enemy\n";
            return;
        }

        cout << "Enemy Spawn: " << enemy[front] << endl;
        front = (front + 1) % MAX;
    }
};

int main() {
    EnemyQueue spawn;

    spawn.enqueue("Zombie");
    spawn.enqueue("Goblin");
    spawn.enqueue("Orc");
    spawn.enqueue("Skeleton");

    spawn.spawnEnemy();
    spawn.spawnEnemy();
    spawn.spawnEnemy();
    spawn.spawnEnemy();

    spawn.enqueue("Zombie");
}
