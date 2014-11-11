#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main () {
    int H, M, S,R, N;
    cin >> N;
 
 
    H = N/3600;
    R = N % 3600;
    M = R / 60;
    S = R % 60;
 
    cout << H << ":" << M << ":" << S << endl;
    return 0;
}
