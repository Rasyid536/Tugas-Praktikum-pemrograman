#include <iostream>
#include <cmath>

struct polar {
    double r;
    double alpha;
};

struct kartesian {
    double x;
    double y;
};

int main()
{
    struct polar p1;
    struct kartesian k1;

    std::cout << "Masukkan nilai r untuk koordinat polar : ";
    std::cin >> p1.r;

    std::cout << "Masukkan nilai alpha untuk koordinat polar : ";
    std::cin >> p1.alpha;

    k1.x = p1.r * cos(p1.alpha);
    k1.y = p1.r * sin(p1.alpha);

    std::cout << "Nilai koordinat kartesian untuk koordinat polar r= "
              << p1.r << " alpha= " << p1.alpha << " adalah:\n";

    std::cout << "x = " << k1.x << " y = " << k1.y;
}
