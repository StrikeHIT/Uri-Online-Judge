#include <iostream>
#include <iomanip>
  
  
using namespace std;
  
int main () {
  
    double A,B;
    double D;
    cin >> A;
    cin >> B;
    D = (A * B) / 12;
  
    cout << fixed << setprecision(3);
    cout << D <<endl;
return 0;
}
