#include <iostream>
#include <string> 

using namespace std;

int main() 
{
    string nama;
    int skor, perubahanSkor;
    
    cout <<"Masukkan nama pemain : ";
    cin >> nama;
    cout <<"Masukkan Score awal : ";
    cin >> skor;
    cout <<"Tambahkan Score(+) : ";
    cin >> perubahanSkor;
    skor += perubahanSkor;
    cout <<"Kurangi Score(-) : ";
    cin>>perubahanSkor;
    skor -=perubahanSkor;
    
    cout << " "<< endl;
    cout << "=== HASIL PEMAIN ==="<<endl;
    cout << "Nama : "<< nama<< endl;
    cout <<"Total score : "<< skor;
    
    
    return 0;
}
