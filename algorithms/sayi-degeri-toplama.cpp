#include <iostream>
using namespace std; 
int main() 
{
    //1’den N’e Kadar Toplam
    //Kullanıcıdan N sayısını al. 
    //1’den N’e kadar olan sayıların toplamını hesapla.
    
    int Toplam=0; 
    int i; 
    int GirilenDeger; 
    
    cout << "Lutfen Bir Sayı Giriniz : "<< endl;
    cin >> GirilenDeger;
    
    for ( i = 1; i <= GirilenDeger;  i++ )
    
    { Toplam = Toplam + i; }   cout << "1 ile "<<GirilenDeger<<" arasinda olan sayilarin toplami: " << Toplam  << endl;
        
        return 0;
}