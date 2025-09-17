#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    char papan [3][3] = {
        {'x','o','x'},
        {'o','x','x'},
        {' ','o','x'}
    };
    
    cout<< "Papan Tic-Tac-Toe" << endl;
    cout << papan[0][0] <<  " | " << papan [0][1] << " | " <<
    papan[0][2] << endl;
    cout<< "--+---+--\n";
    cout << papan[1][0] <<  " | " << papan [1][1] << " | " <<
    papan[1][2] << endl;
    cout<< "--+---+--\n";
    cout << papan[2][0] <<  " | " << papan [2][1] << " | " <<
    papan[2][2] << endl;
    
    return 0;
}
