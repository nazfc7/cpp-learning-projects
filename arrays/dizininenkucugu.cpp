#include <iostream>
using namespace std;

int main() {

    int dizi[5];
    int enkucuk;
    int i;

    for (i = 0; i < 5; i++) {
        cout << "Lutfen bir deger giriniz : ";
        cin >> dizi[i];

        if (i == 0) {
            // ilk girilen sayıyı en büyük kabul ediyoruz
            enkucuk = dizi[i];
        } else {
            // sonraki sayılarla karşılaştırıyoruz
            if (dizi[i] < enkucuk) {
                enkucuk = dizi[i];
            }
        }
    }

    cout << "En kucuk deger : " << enkucuk << endl;

    return 0;
}