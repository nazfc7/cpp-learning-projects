#include <iostream>
using namespace std;

int main() {
int sayi;
cout << "Lutfen 1-5 arasında bir sayı giriniz : " ; 
cin >> sayi;

switch (sayi) {
    case 1: 
    cout  << " seciminiz 1" << endl; break;
    case 2: 
    cout  << " seciminiz 2" << endl; break;
    case 3: 
    cout  << " seciminiz 3" << endl; break;
    case 4: 
    cout  << " seciminiz 4" << endl; break;
    case 5: 
    cout  << " seciminiz 5" << endl; break;
    
    default:
    cout << "1 ile 5 arasında sayı girmediniz!"; 
    break;
}
    return 0;
}