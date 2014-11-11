#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
    double totalvalor, moeda;
 
    cin >> totalvalor;
    int valor = totalvalor;
    moeda = totalvalor - valor;
 
    int cem = valor / 100;
    valor = valor - (cem * 100);
    int cinquenta = valor / 50;
    valor = valor - (cinquenta * 50);
    int vinte = valor / 20;
    valor = valor - (vinte * 20);
    int dez = valor / 10;
    valor = valor - (dez * 10);
    int cinco = valor / 5;
    valor = valor - (cinco * 5);
    int dois = valor / 2;
    valor = valor - (dois * 2);
 
    int m50 = moeda / 0.50;
    moeda = moeda - (m50 * 0.50);
    int m25 = moeda / 0.25;
    moeda = moeda - (m25 * 0.25);
    int m10 = moeda / 0.10;
    moeda = moeda - (m10 * 0.10);
    int m5 = moeda / 0.05;
    moeda = moeda - (m5 * 0.05);
 
    cout << "NOTAS:" << endl;
    cout << cem << " nota(s) de R$ 100.00" << endl;
    cout << cinquenta << " nota(s) de R$ 50.00" << endl;
    cout << vinte << " nota(s) de R$ 20.00" << endl;
    cout << dez << " nota(s) de R$ 10.00" << endl;
    cout << cinco << " nota(s) de R$ 5.00" << endl;
    cout << dois << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << valor << " moeda(s) de R$ 1.00" << endl;
    cout << m50 << " moeda(s) de R$ 0.50" << endl;
    cout << m25 << " moeda(s) de R$ 0.25" << endl;
    cout << m10 << " moeda(s) de R$ 0.10" << endl;
    cout << m5 << " moeda(s) de R$ 0.05" << endl;
    cout << moeda * 100 << " moeda(s) de R$ 0.01" << endl;
return 0;
}
