#include <iostream>
using namespace std;

int main() {
    int dizi[5];        // 5 elemanlı dizi
    int i;
    int pozitif = 0;    // pozitif sayı sayacı
    int negatif = 0;    // negatif sayı sayacı

    // Diziyi kullanıcıdan alıyoruz
    for(i = 0; i < 5; i++) {
        cout << "Bir sayi giriniz: ";
        cin >> dizi[i];
    }

    // Diziyi tarayıp pozitif/negatif sayıyoruz
    for(i = 0; i < 5; i++) {
        if(dizi[i] > 0)
            pozitif++;       // pozitif sayacı artır
        else if(dizi[i] < 0)
            negatif++;       // negatif sayacı artır
        // 0 ise hiçbir sayaç artmaz
    }

    // Sonucu ekrana yazdırıyoruz
    cout << "Pozitif sayi sayisi: " << pozitif << endl;
    cout << "Negatif sayi sayisi: " << negatif << endl;

    return 0;
}
