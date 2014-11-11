#include <iostream>
#include <iomanip>
#include <cmath>
  
using namespace std;
  
int main () {
  
double disttotal;
double combgasto;
cin >> disttotal;
cin >> combgasto;
double TOTAL;
  
  
TOTAL = disttotal / combgasto;
  
  
cout << fixed << setprecision(3);
cout <<TOTAL<<" km/l"<<endl;
  
  
return 0;
}
