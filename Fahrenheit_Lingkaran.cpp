#include <iostream>


using namespace std;


//fungsi farenheit
static void farenheit()
{
    float f, c;
    cout << " konversi suhu dari celsius ke farenheit" << endl;
    cout << "masukan suhu celsius = ";
    cin >> c;
    f = c * 1.8 + 32;
    cout << "suhu farenheit = " << f;
}

//fungsi lingkaran 
static void lingkaran()
{
    constexpr float M_PI = 3.14159265358979323846;
    int isKeliling = 0;
    float luas, keliling, r;
    cout << "1. cari luas " << endl; 
    cout << "2. cari luas dan keliling lingkaran = ";
    cin >> isKeliling;

    cout << "isi radius ";
    cin >> r;
    luas = M_PI * r * r;
    keliling = 2 * M_PI * r;
    cout << "luas = " << luas << endl;
    if (isKeliling == 2)
        cout << "keliling = " << keliling << endl;

}



int main()
{
    int pilih;
    cout << "ketik 1 untuk luas dan keliling lingkaran, ketik 2 untuk konversi suhu = ";
    cin >> pilih;

    if (pilih == 1)
    {
        lingkaran();
    }
    else if (pilih == 2)
    {
        farenheit();
    }
    else
    {
        cout << "opsi yang dipilih tidak tersedia. ";
    }


    return 0;
}
