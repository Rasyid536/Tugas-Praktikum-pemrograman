#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

struct Inventory{
    string name;
    int qty;
    float harga;
};

int main()
{
    cout << " ===INVENTORY RPG(STRUCT)=== " << endl;
    cout << "Input 5 item (nama, qty, nama)" << endl;

    const int n = 2;
    Inventory inventory[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan Nama  : ";
        cin >> inventory[i].name;
        cout << "masukkan qty   : ";
        cin >> inventory[i].qty;
        cout << "Masukkan harga : ";
        cin >> inventory[i].harga;
        cout << endl;
    }

    cout << "             ---DAFTAR INVENTORY---" << endl << "--------------------------------------------------" << endl;
    cout << left << setw(15) <<"Nama"<< setw(10) << "Qty" << setw(10) << "Harga" << setw(10) << "Nilai" << endl;
    
    int totalNilai = 0;
    int nilaiMaksimal = 0; string itemMaksimal;
    for(int j = 0; j < n; j++)
    {
        int nilaiItem = inventory[j].qty * inventory[j].harga;
        cout << left << setw(15) << inventory[j].name << setw(10) << inventory[j].qty 
        << setw(10) << inventory[j].harga << setw(10) << nilaiItem << endl;

        if(nilaiItem > nilaiMaksimal)
        {
            nilaiMaksimal = nilaiItem;
            itemMaksimal = inventory[j].name;
        }
        
        totalNilai +=inventory[j].qty * inventory[j].harga;
    }
    cout << "Total nilai inventory : " << totalNilai << endl;
    cout << "Item nilai terbesat   : " << itemMaksimal << "(" << nilaiMaksimal << ")" << endl;
}
