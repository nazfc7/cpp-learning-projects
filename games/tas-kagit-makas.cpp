#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {

int GirilenDeger,Tahmin;
char devam;
do {

cout << "sayi tahmin oyunuma hoşgeldin :) " << endl; 
cout << "Lutfen sayiyi tahmin ediniz!"<< endl; 
cin >> GirilenDeger;

srand(time(NULL));
Tahmin = rand() % 100 + 1; 

if (GirilenDeger > 100 || GirilenDeger < 1) {
    cout << "Gecersiz Deger!" << endl;}

else {cout << "Deger gecerli sayi tahmini gerceklestiriliyor!" <<endl;}

if (GirilenDeger==Tahmin) { cout << "Tebrikler Dogru Bildiniz!"<<endl; }

else {cout <<"Dogru cevap :"<<Tahmin <<endl << "Bilemediniz.. Tekrar deneyinn! "<<endl; } }

   cout << "Tekrar oynamak ister misin? (e/h): ";
        cin >> devam;

     while (devam == 'e' || devam == 'E');

    cout << "Oyun bitti " << endl; }
