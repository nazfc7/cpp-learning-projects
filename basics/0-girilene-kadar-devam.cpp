#include <iostream> 
using namespace std; 

int main ()

 { 

//kullanıcı 0 girene kadar sayı al, toplamını yazdır
 
int GirilenDeger; 


int Toplam=0;  


cout << "Lutfen Deger Giriniz : ";
 cin >> GirilenDeger;

 
while (GirilenDeger != 0) 


{ Toplam = Toplam + GirilenDeger;
 

cout << "Lutfen Deger Giriniz : "; 

cin >>GirilenDeger; } 

cout << "Program Sonlandi Toplam Deger :" << Toplam << endl; 

}