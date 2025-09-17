#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
   int game [2][2][2] = {
       {{100, 200},{150, 250}},
       {{300, 400 },{3500, 450}}
   };
   cout << "Level 1 - Stage 1 - Skor : " << game[0][0][0] << endl;
   cout << "Level 1 - Stage 1 - Skor : " << game[0][1][1] << endl;
   cout << "Level 1 - Stage 1 - Skor : " << game[1][1][0] << endl;
   
   
    return 0;
}
