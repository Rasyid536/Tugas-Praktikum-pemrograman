#include <iostream>   
#include <stdio.h>   
#include <string>     

using namespace std;

int main()
{
    string playerName = "Player";
    int score = 150;
    double pi = 3.1415926535;

    puts("=== Contoh puts ===");
    puts("Halo, ini hanya string!");
 

    printf("\n=== Contoh printf ===\n");
    printf("Nama   : %s\n", playerName.c_str());
    printf("Score  : %d\n", score);
    printf("Pi     : %.4f\n", pi);

    
    cout << "\n=== Contoh cout ===" << endl;
    cout << "Nama   : " << playerName << endl;
    cout << "Score  : " << score << endl;
    cout << "Pi     : " << pi << endl;

    return 0;
}
