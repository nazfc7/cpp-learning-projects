#include <iostream> 
using namespace std; 
int main () {

        int tek= 0; 
        int cift=0; 
        int dizi[5]; 
        int i=0;

     

        
        for (i =0; i< 5; i++) {
          
            cout << "Lutfen bir deger giriniz :" ; 
       
            cin >> dizi[i];
     if (dizi[i] % 2 == 0) { cift++; }
        else { tek++; }
    
    
    }
       
       cout << "cift sayilar :" << cift << endl;
       cout << "tek sayilar :" << tek ; 

        return 0; 
}