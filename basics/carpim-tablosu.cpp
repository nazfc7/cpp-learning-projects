#include <iostream>
using namespace std; 

int main () 
{
// Çarpım Tablosu
//Kullanıcıdan bir sayı al.
//O sayının 1’den 10’a kadar çarpım tablosunu yazdır.

int GirilenDeger;
int i;
int carpim;

cout << "Lutfen Bir Deger Giriniz :" << endl; 
cin >> GirilenDeger; 

for ( i=1; i<=10; i++) { carpim = GirilenDeger*i;  

cout << GirilenDeger << " x " << i << " = " << carpim << endl; }
}