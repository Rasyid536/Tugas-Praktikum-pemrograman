#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int nilai [5];
    
    int jumlah = 0;
    
    cout << "Masukkan 5 nilai ujian = \n";
    
    cin >> nilai[0] >> nilai[2] >> nilai[3] >> nilai[4];
    
    jumlah = nilai[0] + nilai[2]+ nilai[3] + nilai[4];
    
    cout << "Rata-Rata = " << (jumlah /5) << endl;
    
    return 0;
}
