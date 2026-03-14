#include <iostream>
#include <vector>
using namespace std;
vector<string> enemy;

void tambahEnemy()
{
    string enemyName;
    cout << "Masukkan nama enemy : ";
    cin >> enemyName;
    cout << "Enemy berhasil ditambahkan." << endl;
    enemy.push_back(enemyName);
}

void tampilEnemy()
{
    cout << "Daftar enemy : " << endl;
    for(int i = 0; i < enemy.size(); i++)
    {
        cout << i + 1 << ". " << enemy[i] << endl;
    }
}

void enemyKalah()
{
    cout << "Daftar enemy : " << endl;
    for(int i = 0; i < enemy.size(); i++)
    {
        cout << i + 1 << ". " << enemy[i] << endl;
    }
    int param;
    cout << "Enemy yang dikalahkan : ";
    cin >> param;
    cout << "Enemy " << enemy[param - 1] << " dikalahkan." << endl;
    enemy.erase(enemy.begin() + param - 1);

}

void enemyCount()
{
    cout << "Jumlah enemy aktif : " << enemy.size() << endl;
}


int main()
{
    int choose;
    while(1)
    {
        cout << " === Enemy Manager === \n";
        cout << "1. Tambah enemy \n";
        cout << "2. Tampilkan enemy \n";
        cout << "3. Enemy dikalahkan \n";
        cout << "4. Jumlah enemy \n";
        cout << "5. Keluar \n";

        cout << "\n Pilih menu : "; cin >> choose;
        switch (choose)
        {
        case 1:
            tambahEnemy();
            break;
        case 2:
            tampilEnemy();
            break;
        case 3:
            enemyKalah();
            break;
        case 4:
            enemyCount();
            break;
        default:
            break;
        }

        if(choose == 5){
            break;}
    }
 
}
