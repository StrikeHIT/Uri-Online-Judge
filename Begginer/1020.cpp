#include <iostream>
#include <cmath>
 
using namespace std;
 
int main () {
    int I, A, M, D;
    cin >> I;
 
    A = I/365;
    I = I % 365;
    M = I / 30;
    D = I % 30;
 
 
 
    cout << A << " ano(s)" << endl;
    cout << M << " mes(es)" << endl;
    cout << D << " dia(s)" << endl;
    }
