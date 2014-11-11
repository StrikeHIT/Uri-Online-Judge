#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main () {
    int Cem, Cinq, Vint, dez, cinc, dois, um;
    int N;
    cin >> N;
    int N2 = N;
 
    Cem = N/100;
    N = N % 100;                // utiliza-se o "%" para pegar o resto da divisão.
    Cinq = N/50;               // ex: 2 % 5 = 1   "5 dividido por 2, cabe 2 e sobra 1"
    N = N%50;
    Vint = N/20;
    N = N%20;
    dez = N/10;
    N = N%10;
    cinc = N/5;
    N = N%5;
    dois = N/2;
    N = N%2;
    um = N/1;
    N = N%1;
 
    cout << N2 << endl;
    cout << Cem << " nota(s) de R$ 100,00" << endl;
    cout << Cinq << " nota(s) de R$ 50,00" << endl;
    cout << Vint << " nota(s) de R$ 20,00" << endl;
    cout << dez << " nota(s) de R$ 10,00" << endl;
    cout << cinc << " nota(s) de R$ 5,00"  << endl;
    cout << dois << " nota(s) de R$ 2,00" << endl;
    cout << um << " nota(s) de R$ 1,00" << endl;
    return 0;
}
