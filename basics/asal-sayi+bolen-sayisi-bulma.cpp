#include <iostream>
using namespace std;
int main()
{   int GirilenDeger,i;
    int  sayac=0;
    cout << "Lutfen bir sayi giriniz: ";
    cin >> GirilenDeger;
   
   if (GirilenDeger <= 1)
    { cout << "Asal degil"; return 0;}

    for (int i = 2; i < GirilenDeger; i++)  {
    
  if (GirilenDeger % i == 0)  {   sayac++;   }   }
 
  
    if (sayac==0) {
        
        cout << "Asal sayi"<<endl; }
    else  {cout << "Asal degil"<<endl; }
     
     cout << " kendisi ve 1 haric bolen sayisi : " << sayac;
    return 0;
}