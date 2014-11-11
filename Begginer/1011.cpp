#include <iostream>
#include <iomanip>
#include <cmath>
  
  
using namespace std;
  
  
int main () {
  
  
double VOL;
double pi;
pi = 3.14159;
int R;
cin >> R;
  
VOL = 4 * pi * pow(R , 3) / 3;
  
  
cout << fixed << setprecision (3);
cout <<"VOLUME = "<<VOL<<endl;
  
  
return 0;
  
}
