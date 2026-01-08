#include <iostream>
using namespace std;

int main() {
    int dizi[5];        // 5 elemanlı bir dizi oluşturduk
    int i;

    // Diziyi kullanıcıdan dolduruyoruz
    for(i = 0; i < 5; i++) {
        cout << "Bir sayi giriniz: ";
        cin >> dizi[i];
    }

    cout << "Dizi tersten: ";

    // Diziyi sondan başa doğru yazdırıyoruz
    for(i = 4; i >= 0; i--) {
        cout << dizi[i] << " ";
    }

    cout << endl;
    return 0;
}