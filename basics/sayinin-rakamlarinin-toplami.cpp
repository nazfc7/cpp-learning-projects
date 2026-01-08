#include <iostream>
using namespace std;
int main() {
   int GirilenDeger; 
   int son;
   int toplam;
   
  cout << "Lutfen bir deger giriniz." << endl; 
  cin >> GirilenDeger;
 
   while (GirilenDeger != 0) {son = GirilenDeger % 10; toplam= toplam + son; 
  GirilenDeger = GirilenDeger/10; }
   
   
   cout << "Rakamlar toplamı : " << toplam << endl;
    return 0;
} 