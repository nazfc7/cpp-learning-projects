#include <iostream>
using namespace std;

int main() {

    int dizi[5];
    int enbuyuk;
    int i;

    for (i = 0; i < 5; i++) {
        cout << "Lutfen bir deger giriniz : ";
        cin >> dizi[i];

        if (i == 0) {
            // ilk girilen sayıyı en büyük kabul ediyoruz
            enbuyuk = dizi[i];
        } else {
            // sonraki sayılarla karşılaştırıyoruz
            if (dizi[i] > enbuyuk) {
                enbuyuk = dizi[i];
            }
        }
    }

    cout << "En buyuk deger : " << enbuyuk << endl;

    return 0;
}