#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int GirilenDeger, Tahmin;
    char devam;

    srand(time(NULL));   // bir kez yeter

    do {
        cout << "Sayi tahmin oyunuma hosgeldin :) " << endl;
        cout << "1-100 arasinda bir sayi gir: ";
        cin >> GirilenDeger;

        if (GirilenDeger > 100 || GirilenDeger < 1) {
            cout << "Gecersiz Deger!" << endl;
        } else {
            Tahmin = rand() % 100 + 1;

            if (GirilenDeger == Tahmin) {
                cout << "Tebrikler Dogru Bildiniz!" << endl;
            } else {
                cout << "Dogru cevap: " << Tahmin << endl;
                cout << "Bilemediniz.. Tekrar deneyin!" << endl;
            }
        }

        cout << "Tekrar oynamak ister misin? (e/h): ";
        cin >> devam;

    } while (devam == 'e' || devam == 'E');

    cout << "Oyun bitti" << endl;
    return 0;
}