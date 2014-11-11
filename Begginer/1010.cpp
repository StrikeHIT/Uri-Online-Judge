#include <iostream>
#include <iomanip>
#include <cmath>
  
  
using namespace std;
  
  
int main () {
  
  
    int peca1;
    int npeca1;
    double valpec1;
    int peca2;
    int npeca2;
    double valpec2;
    double TOTAL;
    cin >> peca1;
    cin >> npeca1;
    cin >> valpec1;
    cin >> peca2;
    cin >> npeca2;
    cin >> valpec2;
  
        TOTAL = (npeca1 * valpec1) + (npeca2 * valpec2);
  
  
cout << fixed << setprecision (2);
cout <<"VALOR A PAGAR: R$ "<<TOTAL<<endl;
  
  
return 0;
  
}
