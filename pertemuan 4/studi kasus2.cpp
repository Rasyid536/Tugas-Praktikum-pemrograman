#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string inventory[2][3] = {
        {"Potion", "Sword", "Shield"},
        {"Bow", "Arrow", "Helmet"}
    };

    cout << "=== INVENTORI PLAYER ===" << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "|" << inventory[i][j] << "| ";
        }
        cout << endl;
    }

    return 0;
}
