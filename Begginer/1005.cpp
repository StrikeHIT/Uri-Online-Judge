#include <iostream>
 
#include <iomanip>
 
using namespace std;
int main () {
    cout << fixed << setprecision(5); // impondo numero de casas depois da virgula
        double A, B, MEDIA;
        cin >> A;
        cin >> B;
        MEDIA = ((A *3.5) + (B * 7.5))/11.0; //calculo da média de acordo com a formula e as variaveis
        cout << "MEDIA = " << MEDIA << endl;
        return 0;
       }
