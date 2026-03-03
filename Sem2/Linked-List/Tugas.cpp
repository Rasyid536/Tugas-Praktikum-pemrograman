#include <iostream>
using namespace std;

struct Node {
    string name;
    int hp;
    Node* next;
};

Node* head = nullptr;

// ================= SPAWN AWAL =================
void spawnAwal()
{
    Node* goblin = new Node{"Goblin ", 100, nullptr};
    Node* orc = new Node{"Orc ", 90, nullptr};
    Node* dragon = new Node{"Dragon(boss) ", 100, nullptr};
    Node* newNode = new Node;

    string nama; int hp;
    cout << "Masukkan nama : "; cin >> nama ; 
    cout << "Masukkan HP :"; cin >> hp;
    newNode->name = nama + " ";
    newNode->hp = hp;
    newNode->next = goblin;
    head = newNode;

    goblin->next = orc;
    orc->next = dragon;
    dragon->next = nullptr;
    cout << "Nama enemy : " << newNode->name << goblin->name << orc->name << dragon -> name << endl;
    cout << "Hp enemy : " << newNode->hp << " " << goblin->hp << " " << orc->hp << " " << dragon -> hp << endl << "Spawn sukses " << endl;
}

// ================= INSERT SEBELUM DRAGON =================
void insertMiniBoss()
{
    if (head == nullptr)
    {
        cout << "List kosong" << endl;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr && temp->next->name != "Dragon(boss) ")
    {
        temp = temp->next;
    }
    if (temp->next == nullptr)
    {
        cout << "Dragon tidak ditemukan. MiniBoss tidak ditambahkan." << endl;
        return;
    }

    Node* miniBoss = new Node{"MiniBoss ", 80, nullptr};

    miniBoss->next = temp->next;
    temp->next = miniBoss;

    cout << "MiniBoss berhasil ditambahkan sebelum Dragon" << endl;
}

// ================= DELETE DRAGON =================
void deleteDragon()
{
    if (head == nullptr)
    {
        cout << "List kosong;" << endl;
        return;
    }
    Node* temp = head;

    while (temp->next != nullptr && temp->next->name != "Dragon(boss) ")
    {
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = deleteNode->next;
    delete deleteNode;

    cout << "Dragon berhasil dihapus\n";
}

// ================= DISPLAY =================
void display(bool isWhat)
{
    Node* temp = head;
    int count;
    while (temp != nullptr)
    {
        if(isWhat)
        {
            cout << temp->name << " -> ";
            temp = temp->next;
        }
        else
        {
            temp = temp->next;
            count ++;
        }
    }
    if(!isWhat)
        cout <<count << endl;
}

// ================= MAIN =================
int main()
{
   int choice;

      while (1)
      {
         cout << "=============================\n"
               << " Enemy Active System (SLL)\n"
               << "=============================\n"
               << "1. Spawn enemy\n"
               << "2. Insert enemy before dragon\n"
               << "3. Kill enemy dragon\n"
               << "4. Show enemy list\n"
               << "5. Count enemy list\n"
               << "0. Exit\n";

         cout << "Pilih : ";
         cin >> choice;

         if (choice == 0)
            break;

         switch (choice)
         {
            case 1:
                  spawnAwal();
                  break;
            case 2:
                  insertMiniBoss();
                  break;
            case 3:
                  deleteDragon();
                  break;
            case 4:
                  display(true);
                  cout << "NULL\n";
                  break;
            case 5:
                  display(false);
                  break;
            default:
                  cout << "Tidak ada opsi ini" << endl;
         }
      }
}
