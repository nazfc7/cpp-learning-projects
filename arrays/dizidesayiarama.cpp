#include <iostream>
using namespace std;

int main() {
    int dizi[5];          // 5 elemanlı bir dizi oluşturduk
    int i;
    int aranan;            // kullanıcıdan alınacak sayı
    bool bulundu = false;  // başta dizide yok kabul ediyoruz

    // Diziyi kullanıcıdan dolduruyoruz
    for(i = 0; i < 5; i++) {
        cout << "Bir sayi giriniz: ";
        cin >> dizi[i];
    }

    // Kullanıcıdan aranacak sayıyı alıyoruz
    cout << "Hangi sayiyi aramak istiyorsunuz? ";
    cin >> aranan;

    // Diziyi tarıyoruz
    for(i = 0; i < 5; i++) {
        if(dizi[i] == aranan) {  // eğer bulunduysa
            bulundu = true;      // flag’i true yapıyoruz
            break;               // artık aramaya gerek yok
        }
    }

    // Sonucu ekrana yazdırıyoruz
    if(bulundu)
        cout << "Sayi dizide mevcut." << endl;
    else
        cout << "Sayi dizide yok." << endl;

    return 0;
}
