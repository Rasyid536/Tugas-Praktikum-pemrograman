#include <iostream>

using namespace std;

int main()
{
    int y, x = 87;
    int * px;

    x =87;

    px = &x;
    y= *px;

    cout << "Alamat x = " << &x << endl ;
    cout << "Isi px = " << px << endl;
    cout << "isi x = " << x << endl;
    cout << "Nilai yang ditunjuk oleh px = " << *px;
    cout << "Nilai y = " << y;

    return 0;
}
