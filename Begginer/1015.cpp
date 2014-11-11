#include <iostream>
#include <cmath> //biblioteca matematica
#include <iomanip>
  
  
using namespace std;
  
int main () {
  
double x1;
double y1;
double x2;
double y2;
double distancia;
cin >> x1;
cin >> y1;
cin >> x2;
cin >> y2;
  
distancia = sqrt (pow(x2 - x1 , 2) + pow(y2 - y1 , 2)); //sqrt é a função usada pela biblioteca matematica,
                                                       // que é usada para fazer caculos de raiz
                                                       // ex:
                                                       // result = sqrt(49,2);
                                                       // result = 7;
  
  
cout << fixed << setprecision(4);
cout <<distancia<<endl;
  
  
return 0;
}
