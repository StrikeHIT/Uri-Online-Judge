#include <iostream>
#include <cmath>
  
  
using namespace std;
  
  
int main () {
  
    int A, B, C;
    int maior;
    int TOTAL;
    cin >> A;
    cin >> B;
    cin >> C;
  
    maior = ((A + B + abs(A - B )) / 2);
    TOTAL = ((maior + C + abs(maior - C)) / 2);
  
    cout <<TOTAL<< " eh o maior"<<endl;
  
  
  
  
  
return 0;
}
