#include <iostream>
#include <string>

using namespace std;
int main() {
    int Player[5];
    int i = 0;
    int average = 0;

    cout << "Masukkan skor untuk 5 pemain : " << endl;
    cin >> Player[0] >> Player[1] >> Player[2] >> Player[3] >> Player[4];

    cout << " == LEADERBOARD == " << endl;

    while (i <= 5)
    {
        cout << "Pemain ke " << i << " : " << Player[i - 1] << endl;
        average += Player[i - 1];
        i++;
    }

    average = average / 5;
    cout << average << endl;
    return 0;
}
