#include <iostream>
using namespace std;

int main() {
    int dizi[5];        // 5 elemanlı dizi
    int i;
    int toplam = 0;     // çift sayıların toplamı

    // Diziyi kullanıcıdan alıyoruz
    for(i = 0; i < 5; i++) {
        cout << "Bir sayi giriniz: ";
        cin >> dizi[i];
    }

    // Diziyi tarayıp çift sayıları topluyoruz
    for(i = 0; i < 5; i++) {
        if(dizi[i] % 2 == 0) {
            toplam += dizi[i];   // toplam = toplam + dizi[i]
        }
    }

    // Sonucu yazdırıyoruz
    cout << "Cift sayilarin toplami: " << toplam << endl;

    return 0;
}
