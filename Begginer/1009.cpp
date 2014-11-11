#include <iostream>
#include <iomanip>
   
using namespace std;
   
int main(){
    cout << fixed << setprecision(2);
    string A;
    double B,C,TOTAL;
    cin >> A;
    cin >> B;
    cin >> C;
    TOTAL = (B+C*0.15);
    cout <<"TOTAL = R$ " << TOTAL <<endl;
    return 0;
   }
