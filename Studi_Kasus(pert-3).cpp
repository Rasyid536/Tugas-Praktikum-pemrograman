#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string nama, karakter;
	int umur;

	puts("=== Buat Profil Pemain ===");

	cout << "Masukkan nama anda: ";
	getline (cin, nama);
	
	cout << "Masukkan umur anda: ";
	cin >> umur;

	cout << "Pilih Karakter Favorit (Warrior/Mage/Archer): ";
	cin >> karakter;

	cout << " "<< endl;

	puts("=== Profil Pemain ==");

	cout << "Nama      : " << nama << endl;
	cout << "Umur      : " << umur << endl;
	cout << "Karakter  : " << karakter << endl;
		
	cout << "Selamat datang di game, " << nama << "! Semoga berhasil!";

	return 0;

}
