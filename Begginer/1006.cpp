#include <iostream>
 
#include <iomanip>
 
using namespace std;
int main () {
    cout << fixed << setprecision(1);
        double A, B, C, MEDIA;
        cin >> A;
        cin >> B;
        cin >> C;
        MEDIA = ((A * 2) + (B * 3) + (C * 5))/10.0;
        cout << "MEDIA = " << MEDIA << endl;
        return 0;
       }
