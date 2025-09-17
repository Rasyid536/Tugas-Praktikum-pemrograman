#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
   int blok [2][2][2] = {
       {{100, 200},{150, 250}},
       {{300, 400 },{3500, 450}}
   };
   cout << "blok[0][0][0] = " << blok[0][0][0]<< endl;
   cout << "blok[0][1][1] = " << blok[0][1][1]<< endl;
   cout << "blok[1][0][1] = " << blok[1][0][1]<< endl;
   cout << "blok[1][1][0] = " << blok[1][1][0]<< endl;
   
    return 0;
}
