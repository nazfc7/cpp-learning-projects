#include <iostream>
using namespace std;

int main() {

int enBuyuk;
int a; 
int b; 
int c; 

cout << "Lutfen ilk degeri giriniz : "; 
cin >> a; 

cout << "Lutfen ikinci degeri giriniz : "; 
cin >> b; 

cout << "Lutfen ucuncu degeri giriniz : "; 
cin >> c; 

enBuyuk = a; 

if (enBuyuk < b )  {enBuyuk = b; }

if (enBuyuk < c) {enBuyuk = c; }

cout << "En Buyuk Deger : " << enBuyuk << endl;}