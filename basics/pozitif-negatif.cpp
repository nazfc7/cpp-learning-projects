#include <iostream>
using namespace std; 
int main () {

    int a; 
    
    cout << "Lutfen bir sayi giriniz : " ; 
    cin >> a; 
    
    if (a == 0) {cout << "Girilen deger = 0 " ;} 
    else if ( a < 0) {cout << "Girilen deger negatif " ;} 
    else { cout << "Girilen deger pozitif " ; }

    return 0;
} 