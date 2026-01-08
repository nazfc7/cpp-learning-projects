#include <iostream>
using namespace std;

// Fonksiyon: dizinin toplamını hesaplar
int toplamBul(int dizi[], int boyut) {
    int toplam = 0;
    for(int i = 0; i < boyut; i++) {
        toplam += dizi[i]; // toplam = toplam + dizi[i]
    }
    return toplam; // sonucu main'e döndür
}

int main() {
    int dizi[5]; // 5 elemanlı dizi
    int i;

    // Diziyi kullanıcıdan al
    for(i = 0; i < 5; i++) {
        cout << "Bir sayi giriniz: ";
        cin >> dizi[i];
    }

    // Fonksiyonu çağır ve sonucu ekrana yazdır
    cout << "Dizinin toplami: " << toplamBul(dizi, 5) << endl;

    return 0;
}
