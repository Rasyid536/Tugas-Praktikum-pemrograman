#include <iostream>

using namespace std;
int main()
{
	int alas, tinggi, luas = 0;

	cout << "masukan alas : ";
	cin >> alas;

	cout << "masukan tinggi : ";
	cin >> tinggi;

	luas = alas * tinggi;

	cout << "hasil luas : " << alas << " * "<<  tinggi << " = " << luas;

  return 0;
}
