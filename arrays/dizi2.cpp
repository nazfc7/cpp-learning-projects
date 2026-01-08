#include <iostream>
using namespace std;

int main() {
    int dizi[10];

    // Diziyi kullanıcıdan alma
    for(int i = 0; i < 10; i++) {
        cin >> dizi[i];
    }

    // En büyük elemanı bulma
    int buyuk = dizi[0];

    for(int i = 1; i < 10; i++) {
        if(dizi[i] > buyuk) {
            buyuk = dizi[i];
        }
    }

    // Sonucu yazdırma
    cout << buyuk;

    return 0;
}
