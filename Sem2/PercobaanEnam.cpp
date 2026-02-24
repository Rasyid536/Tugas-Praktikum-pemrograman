#include <iostream>
#include <cstring>

using namespace std;

struct dtnilai
{
    char nrp[10];
    char nama[20];
    double nilai;
};

struct dtnilai datas[10];
int j = 0;

void tambah_data()
{
    char jawab[2];

    while(1)
    {
        cout << "NRP :"; 
        cin >> datas[j].nrp;

        cout << "Nama :"; 
        cin >> datas[j].nama;

        cout << "Nilai Test :"; 
        cin >> datas[j].nilai;

        cout << "Ada data lagi(y/t):"; 
        cin >> jawab;

        if((strcmp(jawab,"Y")==0)||(strcmp(jawab,"y")==0))
        {
            j++;
            continue;
        }
        else if ((strcmp(jawab,"T")==0)||(strcmp(jawab,"t")==0))
            break;
    }
}

void tampil()
{
    cout << "Data Mahasiswa yang telah diinputkan :\n";
    cout << "NRP\tNama\tNilai\n";

    for (int i = 0; i <= j; i++)
    {
        cout << datas[i].nrp << "\t"
             << datas[i].nama << "\t"
             << datas[i].nilai << endl;
    }
}

int main()
{
    tambah_data();
    tampil();
}
