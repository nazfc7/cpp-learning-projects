#include <iostream>
using namespace std;

int main() {
    int dizi[5];        // 5 elemanlı dizi
    int aranan;          // kaç kez sayısını bulmak istediğimiz sayı
    int sayac = 0;       // başlangıçta 0
    int i;

    // Diziyi kullanıcıdan alıyoruz
    for(i = 0; i < 5; i++) {
        cout << "Bir sayi giriniz: ";
        cin >> dizi[i];
    }

    // Aranacak sayıyı alıyoruz
    cout << "Hangi sayinin kac kez gectigini bulmak istiyorsunuz? ";
    cin >> aranan;

    // Diziyi tarayıp sayacı artırıyoruz
    for(i = 0; i < 5; i++) {
        if(dizi[i] == aranan) {
            sayac++;       // eşleşme bulundu → sayacı artır
        }
    }

    // Sonucu yazdırıyoruz
    cout << "Sayi dizide " << sayac << " kez geciyor." << endl;

    return 0;
}