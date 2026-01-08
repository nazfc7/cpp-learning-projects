#include <iostream>
using namespace std; 
int main () {

int dizi[10], toplam = 0;

for(int i = 0; i < 10; i++) {

    cin >> dizi[i];

    toplam += dizi[i];

}

float ort = toplam / 10.0;

cout << ort; 


return 0; 

}
